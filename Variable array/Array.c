#include"Array.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

const int BLOCK_SIZE = 20;

/*typedef struct{
	int *array;
	int size;
}Array;*/
                   
Array array_create(int init_size)  //返回类型就是Array,确保这是本地变量
{								   //如果是指针 那就不是本地变量了
	Array a;                       //为什么不返回malloc的东西？ 看笔记
	a.size = init_size;
	a.array = (int*)malloc(sizeof(int)*a.size);
	return a;
}

void array_free(Array *a)  //虽然a离开了定义域之后会被释放，但Array本身里面有一个指针
{
	free(a->array);          
	a->array = NULL;       //防止别人调用两次，因为malloc对应的free，free 0和NULL是无害的
	a->size = 0;
}

int array_size(const Array *a)
{
	return a->size;       //为什么不直接在main函数里边用这句话？ 看笔记
}

int* array_at(Array *a,int index)  //为什么要返回指针？ 看笔记
{
	if ( index>= a->size){
		array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE-a->size);//index/BLOCK_SIZE算出它位于哪一个block里面
	}                                                            //a->size，要减去这个 就是减去原来的，只剩下要加上的
	return &(a->array[index]);//index是参数                      //整数/整数仍为整数  //这一句就告诉array_inflate一次长20个
}                             //&(...)确保返回的是指针

void array_inflate(Array *a,int more_size)  //与array_at相结合就可以自己增长
{
	int *p = (int*)malloc(sizeof((int)(a->size + more_size)));
	                                            //int i;
	memcpy(p,a->array,sizeof(a->array));		//for( i=0;i<a->size;i++){  //看笔记
												//	p[i] = a->array[i];
												//}
	free(a->array);
	a->array = p;
	a->size += more_size;
}

int main(int argc,char const *argv[])
{
	int number = 0;
	int cnt = 0;
	Array a = array_create(100);
	printf("%d\n",array_size(&a));
	*array_at(&a,0) = 10;
	printf("%d\n",*array_at(&a,0));
	while(number != -1){
		scanf("%d",&number);
		if( number != -1)
			*array_at(&a,cnt++) = number;
	}
	array_free(&a);   //在离开这个main函数之前，我们要把那个a交给main函数

	return 0;
}

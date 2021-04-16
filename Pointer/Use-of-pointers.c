//交换两个数字
/*#include<stdio.h>

void swap(int *pa, int *pb);//定义一个返回值为空的函数swap,函数有两个形参a和b,类型为整型
   
int main(void)
   {
	   int a,b;
	   scanf("%d %d",&a,&b);
	   swap(&a,&b);
	   printf("a=%d,b=%d",a,b);
   }

void swap(int *pa, int *pb)
{
	int t=*pa;
	*pa=*pb;
	*pb=t;
}*/

//输出最大值与最小值
/*#include<stdio.h>
void minmax(int a[],int len,int *min,int *max);
int main(void)
{
	int a[]={1,2,3,4,5,6,7,8,9,10,};
	int min,max;
	minmax( a,sizeof(a)/sizeof(a[0]) , &min, &max);//为什么不可以minmax( a[],sizeof(a)/sizeof(a[0]) , *min, *max)
	                                               //*min和&min不是一样吗？不一样，类型不一样，指针将来得到的是一个地址，
												   //所以传值的时候只能传地址
												   //为什么是输入一个表达式（变量）？列表是不变的，但它不是一个表达式吗？
												   //是一个表达式但a[]没有意义，它传入一个值要么是a[1](就是有下标）要么是a(就是整个列表）
	printf("min=%d,max=%d",min,max);
	return 0;
}

void minmax(int a[],int len,int *min,int *max)
{
	int i;
	*min=*max=a[0];
	for(i=1;i<=len;i++){  //为什么初始化不能为0？可以，但a[0]不是已经给了min吗，就自己在比一遍
		if(a[i]<*min){
		 *min=a[i];
		}
		if(a[i]>*max){
		 *max=a[i];
		}
	}
}  //min的值为什么这么奇怪？是数据越界了吗？是因为i不能是i<=len 这样的话下标会越界，10个数下标是0到9
*/


//除法成功返回1，不成功返回0
/*#include<stdio.h>
int divide(int a,int b,int *result);
int main(void)
{
	int a=5;     //int a,b,c;
	int b=4;     //scanf("%d %d",&a,&b);为什么不能这样？为什么不能人为输入？
	int c;       //scanf要写在全部定义变量的后面  VS这个程序就是这样的
	if(divide(a,b,&c)){      //divide返回了1或0，即返回真或假，即判断if是否要执行
	      printf("%d/%d=%d\n",a,b,c);
	}
	return 0;
}

int divide(int a,int b,int *result)
{
	int ret=1;
	if(b==0) ret=0;  
	else{
		*result=a/b;  //这个函数返回的不是ret吗？那这一句是怎么执行的？是因为是指针所以可以直接改变主函数的变量的值
	}                 //就不关return的事了
	
	return ret;
}*/

//动态申请内存
/*#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int number;
	int* a;
	int i;
	printf("输入数量：\n");
	//int a [number];  //C99之后才可以，相应的也不用int* a;
	scanf("%d",&number);
	printf("输入相应个数的数字：\n");
	a = (int*)malloc(number*sizeof(int));//malloc返回的是void*，就是返回一个指针 但不知道这个指针会指向哪里
	                                     //可以向它要120个字节，然后把它当作int
	                                     //sizeof(int)就是int类型的字节大小
	                                     //此时返回给a是指针，但可以当成数组来用

	for(i = 0;i<number; i++){
	   scanf("%d",&a[i]);                 //给数组分配空间，但没有给数组值呀？输入number==2 再输入两个数字就是给数组赋值啦
	}
	for(i=number-1;i>=0;i--){             //逆序输出这个数组   //i=number-1表示最大的那个下标
	   printf("%d",a[i]);                 //为什么程序运行的时候没有输出？有输出逆序输出
	}                                    
	                                        
	free(a[0]);                             //为什么需要释放的内存的起始地址是a?？？？？？？？？？？？？？？？ 
	return 0;                      
}*/

//查看可以分配多少空间
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	void* p;
	int cnt = 0;                             //定义cnt这个变量是为了制造循环，且输出东西
	while((p=malloc(100*1024*1024))){        //将malloc的值赋给p？不是每次只会赋一样的值吗？那怎么会得到地址是0呢？
		                                     //是因为内存中的空间是连续的吗？就取一次就进行到下一个空间 一直到0，是吗？
		cnt++;                               //如果P得到的地址是0就跳出循环
	}
	printf("分配了%d00MB的空间\n",cnt);
    return 0;
}*/



#include<stdio.h>
int search(int key,int a[],int length){
	int i=0;
	int ret=-1;
	for(i=0;i<length;i++){
		if(a[i]==key){
			ret=i;
			break;
		}
	}
	return ret;
}
/*1，main()：相当于 int main()

2，int main()：int 是main() 函数的返回类型。这表明main()函数返回的值是整数且授受任何数量的参数。

3，void main()：void为空类型。这表明main函数无返回值且授受任何数量的参数。

4，int main(void)：main不接受任何参数且返回的值是整数。*/
int main(void)   //没有void时 结果总是：找不到相应的值；有了后结果就是正确的；为什么？ 
{
	int x;
	int a[] = {2,3,4,5,6,7,8,9};
	int loc;
	printf("请输入一个数字\n");
	scanf("%d",&x);//scanf的字符串里如果有\n，那么\n也是一个字符，到时候输入的时候要多输入一个字符 
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	if(loc!=-1){
		printf("它在第%d个位置上\n",loc);
	} else {
		printf("找不到相应的值\n");
	}
	return 0;
 } 

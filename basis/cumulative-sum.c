//累加求和
/*# include <stdio.h>
int sum (int begin,int end)
{
	int i;          //不应该赋值   应改为：int i; int sum=0; 
	int sum =0 ;
	for( i=begin;i<=end;i++){       //要有循环结束的条件 
		sum +=i;
	}
	printf("%d到%d的和是%d\n",begin,end,sum);
}
int main (){
	int a,b,c;
	scanf("%d %d",&a,&b);  //注意 &
    c = sum (a,b);   //原错误：int c = sum (a,b); 标准C不可以这样，所有的标准C的变量声明要在前面
	return 0;         
	
}*/

//分数累加求和
/*#include<stdio.h>
int main()
{
	int i;
	int a;
	double sum = 0;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		sum+=1.0/i;          //输出结果为1.#INF00 表示正无穷（输出浮点数常见错误）想办法把0去掉
	}                        //此时的i不能为0，1.0/0为正无穷大
	printf("%lf",sum);
}
/*当用 0 除一个整数时便会得到一个
1.#INF / inf值；
相应的，如果用 0 除一个负整数也会得到
-1.#INF / -inf 值。*/

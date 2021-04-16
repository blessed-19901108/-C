# include <stdio.h>
#include <math.h>
/*判断是否是素数 
int main ()
{
	int x;
	int i;
	scanf ("%d",&x);
	int isprime =1;
	for (i=2;i<x;i++){
		if(x%i==0){
			isprime =0;
			break;
		}
	}
	if(isprime==1){
		printf("%d是素数",x);
	}else if(isprime==0){
		printf("%d不是素数",x);
	}
	return 0;
 } */
 
 
 /*输出100以内的素数
 int main ()
{
	int x; 
	for(x=2;x<100;x++){ //选定一段代码 按Tab键就可以推出去 
		int i;          
		int B=1;
		for(i=2;i<x;i++){
			if(x%i==0){
				B=0;
				break;
			}
		}if(B==1){
			printf("%d\n",x);
		}
		
	}
	printf("\n");
	return 0;
 } */ 
 


//%d元是由%d个一角和%d个两角和%d个五角组成的 
/*int main ()
{
	int x;
	scanf("%d",&x);
	int one,two,five;
	for(one=1;one<=x*10;one++){
		for(two=1;two<=x*10/2;two++){
			for(five=1;five<=x*10/5;five++){
				if(x*10==one+two*5+five*2){
				printf("%d元是由%d个一角和%d个两角和%d个五角组成的。\n",x,one,two,five);
				goto out;
				}
			}
		}
	}
out:
	return 0;
}*/ 

//%d元是由%d个一角和%d个两角和%d个五角组成的 (错误的程序，不明白语法） 
 /*int main ()
{
	int x;
	int exit;
	scanf("%d",&x);
	int one,two,five;
	for(one=1;one<=x*10;one++){
		for(two=1;two<=x*10/2;two++){
			for(five=1;five<=x*10/5;five++){
				if(x*10==one+two*5+five*2){
				printf("%d元是由%d个一角和%d个两角和%d个五角组成的。\n",x,one,two,five);
				exit=1;
				break;
				}
			}
			if(exit==1)break;
		}
		if(exit==1)break;
	}
	
	return 0;
}*/ 

//累加分数变号求和 
/*# include<stdio.h>
int main ()
{
	int n;
	int i;
	double sum=0.0;
	int sign=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum +=sign*1.0/i;
		sign =-sign;
	}
	printf("f(%d)=%lf\n",n,sum );
	return 0;
}*/

//最大公约数 枚举 
/*int main ()
{
	int a,b;
	int min;
	scanf("%d %d",&a,&b);
	if(a<b){
		min =a;
	}else if(b<a){
		min =b;
	}
	int i=1;
	int ret;
	for(i=1;i<min;i++){
		if(a % i==0){
			if(b % i==0){
				ret = i;
				
			}
		}
	}
	printf("%d",ret);
	return 0;
 } */
 
 //最大公约数 辗转相除法
 /*int main () 
 {
 	int a,b,t,ret;
 	scanf("%d %d",&a,&b);
 	
	 while(b!=0){
	 	t =a%b;
	 	a = b;
	 	b =t;
	}
	printf("%d",a);
 	return 0;
 }*/
 
 //分解整数 倒序
 /*int main ()
 {
 	int x;
 	scanf("%d",&x);
 	do{
	 int d=x % 10;
	 printf("%d",d);
	 //printf("\n");    //%d一定要代替一个值  \n是换行 
	 if(x>9){           //可以空格 就最后一轮不输出空格 
	 	printf(" ");
	 }
     x/=10;
	 } while(x>0);
	 return 0;
 }*/
 
 // 解整数 正序
 //逆序一遍后再逆序一遍  只适用于末尾没有零 
 /*int main ()
 {
 	int x;
 	scanf("%d",&x);
	int t = 0;
	do{
		int a=x % 10;
		t = t*10+a;
		printf("%d\n",t);
		x/=10;
	}while(x>0);
	printf("x=%d t=%d\n",x,t);
	x=t;
	
	do{
		int d = x % 10;
		printf("%d",d);
		if(x>10){         //最后一轮不输出空格 
			printf(" ");
		}
	    x/=10;	
	}while(x>0);
	
	printf("\n");
	return 0;
	  } */
	   
  // 解整数 正序 末尾可以为零 无交互 
  /*12345/10000->1    //先输出最高位 再改变x的值 再改变mask的值 
  12345%10000->2345
  10000/10->1000
  2345/1000->2
  2345%1000->345
  1000/10->100
  345/100->3
  345%100->45
  100/10->10
  45/10->4
  45%10->5
  10/10->1
  5/1->5
  5%1->5
  1/10->0*/
  /*int main ()
  {
  	int mask=10000;
  	int x=12345;
  	int t;
  	do{
  		t=x / mask;
  		printf("%d",t);
  		if(mask>0){
  			printf(" ");
		  }
  	    x %=mask;
  		mask/=10;
  		
	  }while(mask>0);
	  return 0;
   } */
   
    // 解整数 正序 末尾可以为零 有交互 
   /* int main ()
  {
  	int mask=1;
  	int x;
  	scanf("%d",&x);
  	int a=x;
  	while(a>9){    //错a>0 mask会多一个零 
  		a/=10;     //pow(10,cnt-1)可以算  cnt用来记录位数，要自己定义函数 
  		mask*=10;	
	  }
  	
  	do{
  		int t=x / mask;
  		printf("%d",t);
  		if(mask>0){
  			printf(" ");
		  }
  	    x %=mask;
  		mask/=10;
  		
	  }while(mask>0);
	  return 0;
   } */ 

#include<stdio.h>
//int isprime(int x);  //从2到X-1判断能否整除   //单独一个函数头要加分号
                     //法二：去掉偶数，从3到X-1，每次i+2
/*int main(void) //主函数调用一个函数 输出结果 和法一法二一起使用
{
	int x;
	scanf("%d",&x);
	if( isprime(x)){
		printf("%d是素数\n",x);
	}else{
		printf("%d不是素数\n",x);
	}
	return 0;
}*/

//法一：从2到X-1判断能否整除
/*int isprime(int x)
{
	int ret = 1;
	int i;
	for(i=2;i < x;i++){   //i=2就可以了 如果等于1就任何数都可以整除
		if(x % i==0){
		ret = 0;
		break ;
		}
	}
	return ret;
}*/

//法二：去掉偶数，从3到X-1，每次i+2
/*int isprime(int x)
{
	int ret = 1;
	int i = 3;
	if( x==i||(x % 2 ==0 && x!=2))  ret = 0;
	for(i=3;i < x;i+=2){   //这里可以不用走到X-1  走到sqrt(x)就够了（数学理论）记得加上#include<math.h>
		if(x % i==0){
		ret = 0;
		break ;
		}
	}
	return ret;
}*/


//法三：判断是否能被已知且<x的素数整除即可 需要一张已有的素数表(一个一个数去判断）
/*
int isprime(int x,int knownprimes[],int numberofknownprimes)   //isprime(i,prime,count）
{
	int ret = 1;
	int i;
	for (i=0;i<numberofknownprimes; i++){
		if( x % knownprimes[i] == 0 ){
			ret = 0;
			break;
		}
	}
	return ret;
}

int main()
{
	const int number = 100;  //构造素数表
	int prime[100] = {2} ;  //使数组的第一个数为2（第一个素数）  
	                          //错误：【C99表示数组的第一个数为2】int prime[number] = {2};  
	                          //正确：【标准C里定义数组时[]中填得数表示数组的大小 只能是常量】int prime[10] = {2}表示初始化 
	                          //还有问题？？？？？？
	int count = 1;     //数组里已经有一个素数2   count表示数组的下标，下一个素数会被填到prime[1]这个位置
	int i = 3;         //从整数3开始判断是不是素数 

	//为了好看 输出一个表头
	{                 
		int i;             
		printf("\t\t\t");
		for(i = 0;i<number;i++){    //只是输出数字
			printf("%d\t",i);
			}
		printf("\n");
	}
     while (count < number){
		if (isprime(i,prime,count)){   //判断是否是素数 ret返回为1就执行
			prime[count++] = i;    //当有一个整数是素数时，将其加入到数组中；然后cnt再加1，即数组的下标号加1 移到下一个空位
		}                          //因为count++后缀 先是prime[count]，然后count再+1
		i++;
	}
	//调试语句输出最后的素数表
	{                           
		printf("i=%d\t count=%d\t",i,count);   //输出外面的i与count   // \t表示跳到下一个Tab位置
		{                        //加上大括号，重新定义一个语句块，里面的变量为局部变量
			int i;
			for(i = 0;i<number;i++){    //遍历数组，输出数组的每一个值
				printf("%d\t",prime[i]);
			}
			printf("\n");
		}
	}
	//这一段用于定义格式 就每输出5个数就换行 prime[0]除外
	for( i=0;i<number;i++){     
		printf("%d",prime[i]);
			if((i+i)%5) printf("\t");
			else printf("\n");
	 }
	return 0;
}*/
//stack around the variable was corrupted  变量周围的堆栈已损坏——>数组下标越界(上界 下界均有可能）


//法三：判断是否能被已知且<x的素数整除即可 需要一张已有的素数表
/*算法
1、令X=2
2、将2X,3X,4X直到aX<n时标记为非素数
3、玲X为下一个没有被标记为非素数的数，重复2，只到所有的数被标记完毕
*/
/*伪代码 ·欲构造n以内（不含）的素数表
1、开辟prime[n]，初始化其所有元素为1， prime[x]为1,表示x是素数
2、令x=2
3、如果x是素数，则对于（i=2;x*i<n;i++)令prime[i*x]=0
4、令x++，如果x<n,重复3，否则结束*/
int main()
{
	const int maxNumber = 25;
	int isPrime[25];
	int i;
	int x;
	for ( i=0;i<maxNumber;i++){   //初始化数组
		isPrime[i] = 1;
	}
	for ( x=2;x<maxNumber;x++){    //将素数放到数组中去
		if( isPrime[x]){
			for ( i=2; i*x<maxNumber;x++){
		       isPrime[i*x] = 0;
			}
		}
	}
	for( i=2;i<maxNumber;i++){   //遍历数组
		if ( isPrime[i]){        //跳过isPrime[0]和isPrime[1]
			printf("%d\t",i);
		}
	}
	printf("\n");
	return 0;
}

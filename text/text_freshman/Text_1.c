//排序a>b>c
/*#include<stdio.h>

int main()
{
	int a,b,c;
	int t;

	printf("请输入三个整数/n");
	scanf("%d %d %d",&a,&b,&c);

	if(a<b)
	{
		t = a;
		a = b;
		b = t;
	}
	if(a<c)
	{
		t = a;
		a = c;
		c = t;
	}
	if(b<c)
	{
		t = b;
		b = c;
		c = t;
	}


	printf("排序后的数字为：%d %d %d",a,b,c);

	return 0;
}*/

//1、判断水仙数   //输出所有的水仙数（用函数实现）
/*#include<stdio.h>

int main()
{
	
	int x=0,t2=0,n=0;
	int a=0,b=0,c=0;
	scanf("%d",&x);
	t2 = x;
	if(n==3){
		a = t2 /100;   //从高位到低位
		t2 %=100;
		b = t2 /10;
		t2 %=10;
		c =t2;
		if(x==a*a*a+b*b*b+c*c*c){  //pow(double,bouble) 但这个程序百位是整数，范围仍是安全的。
			printf("%d是水仙数\n",x);
		}else printf("%d不是水仙数\n",x);
	}else{
		printf("data error\n");
	}
	return 0;
}*/


//2、输入一串字符，以‘#’作为输入结束标志，统计出其中字母和数字的个数并输出。
/*#include<stdio.h>

int main()
{
	char ch;
	int zd=0,sd=0;
	while((ch = getchar())!='#')
	{
		if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
		{
			zd++;
		}
		if(ch>='0'&&ch<='9')
		{
			sd++;
		}
	}
	printf("%d %d",zd,sd);
	
	return 0;
}*/








//3、求和 e=(1/1!)+(2/2!)+(3/3!)+...+(n/n!)
/*#include<stdio.h>

int main()
{
	double e=0,item=1;  //e为和 item为阶乘
	int j,n;             
	printf("请输入n:\n");
	scanf("%d",&n);
    for(j=1;j<=n;j++)
	{
			item = item*j;
			e += j/item;
	}
	printf("e = %.4lf\n",e);
    return 0;
}*/
/*#include <stdio.h>  
int main()
{
	int a=1,b=1,n=1;
	double c=0,sum=0;
	for(a=1;a<=7;a++)
	{
		c = a/b;
		sum += c;
		n++;
		b *= n;
	}
	printf("%.2lf\n",sum);
	return 0;
}*/


//4、定义一个N×N的整型二维数组，并输入该数组的值。求出数组周边元素和，并输出该和。

/*#include<stdio.h> //输入一个正整数n(1<=n<=6);输入n阶方阵a;
int main ()       
{                  
	int n,a[6][6],sum = 0,i,j;
	printf("请输入n:");
	scanf("%d",&n);
	printf("请输入%d*%d的方阵\n",n,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(i==0||i==(n-1))
				sum += a[i][j];
			if((j==0||j==(n-1))&&i!=0&&i!=(n-1))
				sum += a[i][j];
		}

	printf("%d\n",sum);
	return 0;
}*/



//5、编程先由计算机“想”一个1～100之间的数请人猜，如果人猜对了，则结束
//游戏，并在屏幕上输出人猜了多少次才猜对此数，以此来反映猜数者“猜”的
//水平；否则计算机给出提示，告诉人所猜的数是太大还是太小，最多可以猜
//10次，如果猜了10次仍未猜中的话，结束游戏。要求：自行设计用于猜数的
//子函数，主函数用来输入和输出猜数的结果。
/*#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    srand((unsigned int)time(NULL));
    int n = rand()%100+1;
    printf("计算机已经生成一个数。\n");
    int count = 0;
    int tmp;
    while(true){
        printf("请猜数：");
        scanf("%d",&tmp);
        count++;
        if(tmp == n){
            printf("你猜对了，用了%d次机会。\n",count);break;
        }else{
            if(count>=10){
                printf("10次机会已经用完。\n");break;
            }else if(tmp>n){
                printf("你猜的数大了。\n");
            }else if(tmp<n){
                printf("你猜的数小了。\n");
            }
        }
    }
    printf("游戏结束！计算机生成的数是%d。\n",n);
    return 0;
}*/


//7、菜单
/*#include <stdio.h>  
int main()
{
	int x;//菜单选项
	int n;//循环计数
    int a; double c=1;//整数的阶乘
    int b; //素数的判断
	int number=0;//奇数偶数的判断
	int j,fac=0,g; //判断完数 fac为因子的和 g为输入的数字

	do       //多次输入
	{
		printf("输入数字选择要执行的程序：\n");
		printf("1、整数的阶乘\n");
		printf("2、素数的判断\n");
		printf("3、奇数偶数的判断\n");
		printf("4、判断一个整数是否为完数\n");
		printf("按5退出菜单\n");
		printf("\n");
		scanf("%d",&x);
		switch(x)
		{

			case 1:	
				printf("请输入一个数字\n");
				scanf("%d",&a);
				for(n=1;n<=a;n++)
				{
					c *= n;
				}
				printf("%.2lf\n",c);
				break;

			case 2:
				printf("请输入一个数字\n");
				scanf("%d",&b);
				for(n=2;n<b;n++){
					if(b%n==0){
						printf("不是素数\n");
						break;
					}
				}
				if(n==b)
				{             
					printf("是素数\n");
				}
				break;

			case 3:
				printf("请输入一个数字\n");
				scanf("%d", &number);
				if(number % 2 == 0)
				    printf("%d 是偶数。\n", number);
				else
					printf("%d 是奇数。\n", number);
				break;

			case 4:
			     printf("请输入一个数字\n");
			     scanf("%d",&g);           
				 //求因子的和
				 for(j=1;j<g;j++)//这里不可以是j<=a，如果j=a，因子的和会加上g；
				 {                //那么判断是否为完数的时候a不可能等于fac
					if(g%j==0)      
					  fac = fac+j;
				  }
				  //判断是否为完数
				  if(g==fac)
				      printf("%d是完数\n",g);//输出完数
				  else 
					  printf("%d不是完数\n",g);
				  break;

			default:
				   printf("菜单已关闭\n");
			}
	}while(x!=5);
	return 0;
}*/


//8. 输入一个以‘.’结束的字符串（少于50个字符），把字符串中的所有数字字符‘0’-‘9’
//转换为整数，去掉其他字符。
/*#include<stdio.h>
#include<string.h>

int main()
{
	char str[80];
	int i=0;

	do
	{
		str[i++]=getchar();
	}while(str[i-1]!='.');
	str[i-1] = '\0';

	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='0'&&str[i]<='9')
			printf("%d",str[i]-'0');
	}

	return 0;
}*/
/*#include<stdio.h>
int main ()
{
	char a[80];
	int i=0,A=0;
	for(i=0;i<80;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n')
		{
			a[i] = '\0';
			break;
		}
			
	}
	for(i=0;a[i]!='\0';i++)
	{
		if( a[i]>='0'&&a[i]<='9')
		{
			A = a[i]-'0';
			printf("%d\n",A);
		 }
	}
	return 0;
}*/
/*#include<stdio.h>  //法二
#include<string.h>
int main ()
{
	char a[80];
	int i=0,A=0;
	gets(a);//只对C语言，gets可以吞空格,遇到回车它就默认已经取完一个字符串了
	for(i=0;a[i]!='\0';i++)
	{
		if( a[i]>='0'&&a[i]<='9')
		{
			A = a[i]-'0';
			printf("%d\n",A);
		 }
	}
	return 0;
}*/
/*#include<stdio.h>//课本
int main ()
{
	char a[80];
	int i=0,A=0;
	for(i=0;i<80;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n')
		{
			a[i] = '\0';
			break;
		}
			
	}
	for(i=0;a[i]!='\0';i++)
		if( a[i]>='0'&&a[i]<='9')
			A = A*10+(a[i]-'0');//把前一个数*10，即为进位，把其算成一个整数
		printf("%d\n",A);
	return 0;
}*/



//9、数组a有20个元素，20个随机2位整数    //第二种算法：把新插入的元素作为第21个，再排序
//先生成随机数，再排序，任意输入两位数的整数插入数组后有序输出
/*#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a[100],i=0,t=0,j=0; //t数组交换位置时储存数值 i、j均为下标
	int loc=0,key=0;
	srand((unsigned)time(NULL));//放到for循环（运行的速度极快，超过了秒）里的话，
	                            //每次都是重新运行，时间单位秒还没改变，拿出来的话会慢一点
	//生成2个随机数并将随机数赋值给单个数组元素
	for(i=0;i<20;i++)   
	{
		a[i]= rand()%(99-10+1)+10; //rand()%(99-10+1)-->(0,89)-->加10后变成(10,99)
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("\n");//格式控制
	//随机数排序 从小到大    //t = a[i-1]; a[i-1] = a[i]; a[i]=t;这一段只能比较两个数
	for(i=0; i<20-1; i++){   //这个for循环记下已经完成排序的数  //i最大取到18，带进去走一遍  20个数下标最大为19
        for(j=0; j<20-1-i; j++){   //这个for循环控制该轮最大的数，两两比较，较大的数往后移一位
            if(a[j] > a[j+1]){     //每一轮比较前 n-1-i 个，也就是说，已经排序好的最后 i 个不用比较
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
	//输出排序后的数组
	for(i=0; i<20; i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("\n");

	printf("请输入要插入的数\n");
	scanf("%d",&key);
	 //寻找要插入到位置
	if(key>9&&key<100)   
	{                            //这里可以先判断key是否大于最大的数
		for(i=0;i<20;i++) 
		{                        
			if(a[i]>=key)      //随机数是从小到大排序的 ，如果a[i]<=key，
			{                   //否则直接不赋值，loc为0，是最小值
				loc = i;
				break;
			}
		}
		//给插入数空出位置
		for(i=20;i>=loc;i--)  
		{
			a[i]=a[i-1];
		}
		//将插入数安放到数组中
		a[loc]=key;
		//输出数组的各个元素
		for(i=0;i<21;i++)     
		{
			printf("a[%d]=%d\n",i,a[i]);
		}
	}else printf("Date error\n");
	return 0;
}*/




//10. 编程实现：输入一个正整数n(1≤n≤6)和n阶方阵a中的元素，假设方阵a最多有1个鞍点，
//如果找到a的鞍点，就输出其下标，否则输出“No”。所谓鞍点，就是其元素在该行上最大，
//在该列上最小。请编程实现上述问题。
/*#include<stdio.h>   //改正后的
int main ()
{
	int n,a[6][6],i,j,flag=0;  //标志可以提前结束或者补充操作
	int t=0,count1,count2;//count1(标记该行中的最大值)
	printf("请输入n:\n");
	scanf("%d",&n);
	printf("请输入%d*%d的方阵:\n",n,n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	//找出鞍点 
	for(i=0;i<n;i++)
	{
		//找出该行中的最大值
		for(j=0;j<n;j++)
		{
			if(t<a[i][j])
			{
				t = a[i][j];
				count1 = i;
				count2 = j;//如果没有记下此时的j，j出循环会多1
			}
		}
		//判断该行中的最大值是否是该列的最小值
		for(i=0;i<n;i++)
		{
			if(a[i][count2]<t)
			{
				flag = 1;
				break; //只是跳出这个for
			}
		}
		if(flag==0)		//如果两次执行下来仍未0，则就是这个鞍点
		{
			printf("a[%d][%d]\n",count1,count2);
			break;//已经假设了只有1个鞍点
		}else printf("没有鞍点\n");
	}
	return 0;
}*/



//11、输入三个0-9之间的整数，输出该三个数字能组成的最大三位整数，
//利用循环实现能够多次输入和输出，当程序输入三个数字均为9时程序结束。
//例如：输入：5，7，3。则输出：753；输入：0，5，3，则输出：530。
//要求以函数形式实现，接受三个整型的参数函数，函数的返回值为一个三位整数。
/*#include<stdio.h>

int func(int,int,int);

int main()
{
	int a,b,c,ret;
	scanf("%d %d %d",a,b,c);
	ret = func(a,b,c);
	printf("%d",ret);

	return 0;
}

int func(int a,int b,int c)
{
	int ret,t;

	if(a<b)
	{
		t = a;
		a = b;
		b = a;
	}
	if(a<c)
	{
		t = a;
		a = c;
		c = a;
	}
	if(b<c)
	{
		t = b;
		b = c;
		c = b;
	}
	ret = a*100+b*10+c;

	return ret;
}*/





//12、函数调用的运用
/*#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int Add(int a,int b)  //两个加数
{
	return a+b;
}
int Print(int c,int d)//c为答案，d为学生结果
{
	if(c==d)
	 return 1;
	else
	 return 0;
}*/
/*int main()  //（1）
{
	int a,b,c,xueshen;//c是结果，d是输出的标志
	printf("请输入两个要相加的数\n");
	scanf("%d %d",&a,&b);
	printf("请学生输入答案\n");
	scanf("%d",&xueshen);//学生输入答案
	c = Add(a,b);
	if(Print(c,xueshen))
		printf("Right!\n");
	else printf("Not correct! Try again\n");
	return 0;
}*/
/*int main()  //（2）
{
	int a,b,c,xueshen;//c是结果，d是输出的标志
	printf("请输入两个要相加的数\n");
	scanf("%d %d",&a,&b);
	printf("请学生输入答案\n");
	do
	{
		scanf("%d",&xueshen);//学生输入答案
		c = Add(a,b);
		if(Print(c,xueshen))
		   {
				printf("Right!\n");
				break;
		   }
			else 
		   {
				printf("Not correct! Try again\n");
				printf("请学生再次输入答案\n");
		   }
	}while(1);
	return 0;
}*/
/*int main()  //（3）
{
	int a,b,c,xueshen,n=0;//c是结果，d是输出的标志 n为计数
	printf("请输入两个要相加的数\n");
	scanf("%d %d",&a,&b);
	printf("请学生输入答案\n");
	do
	{
		n++;
		scanf("%d",&xueshen);//学生输入答案
		c = Add(a,b);
		if(Print(c,xueshen))  //答案正确
		   {
			printf("Right!\n");
			break;
		   }
		else if (n<3)        //else则为答案不正确，只管次数就可以辽
			{
				printf("Not correct! Try again\n");
				printf("请学生再次输入答案\n");
			 }
		else if(n==3)
		   {
				printf("Not correct! You have tried three times! Test over!\n");
				break;
			}
	}while(1);
	return 0;
}*/
/*int main()  //（4）
{
	int a,b,c,xueshen;//c是结果 xueshen是学生的答案
	int sum=0,N=0,n1=0;//sum总分 N题号 n1做对的题数
	int A[10]={0},i=0;//A[10]做对的题号 i为数组下标  
	//int A[10]={0}只有赋0值给了数组的第一个元素才会
	//将数组内所有的值变为0，否则就为随机值  因为给部分元素赋值后就相当于
	//有过初始化的一个动作，C语言就规定了给部分元素赋值后，其他默认值为0
	srand((unsigned)time(NULL));
	do
	{
		N++;
	    a = rand()%10;//a = rand()%(99-10+1)+10;//产生10到100之间的数
		b = rand()%10;//b = rand()%(99-10+1)+10;
		printf("请学生输入答案\n");
		printf("%d、%d+%d=",N,a,b);
		scanf("%d",&xueshen);//学生输入答案
		c = Add(a,b);
		if(Print(c,xueshen))
		{
			printf("Right!\n");
			n1++;
			sum += 10;
			A[i++]=N;//将N的值赋给A[i]后i++
		}
		else printf("Not correct! \n");
	}while(N<10);
	printf("这是做对的题号：");
	for(i=0;i<10;i++)
	{
		if(A[i]!=0)
			printf("%d ",A[i]);
	}
	printf("\n一共做对了%d道题\n",n1);
	printf("总分：%d\n",sum);
	return 0;
}*/

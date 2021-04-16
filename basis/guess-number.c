#include <stdio.h>
int main ()
{
	int number = rand()%100+1;
	int count = 0;
	int a ;
	printf("我已经想好一个0到100之间的数了。\n");
	do {
		printf ("请输入一个数\n");
		scanf("%d",&a); 
		if(a>number){
			printf("你输入的数大了\n");
		}else if(a<number){
		    printf("你输入的数小了\n");
		}
		
	}while(a != number);
	printf("太棒了，你猜对了！\n");
 } 

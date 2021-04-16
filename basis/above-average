# include<stdio.h>
//输入数量不确定的0到9的数并且求和后输出超过平均值的数，输入-1结束 (程序错误） 
/*int main ()
{
	int x;
	double sum ;
	int number[100];
	int cnt=0;
	scanf("%d",&x);
	for(sum =0;x!=-1;cnt++){
		number[cnt]=x;
		sum+=x;
		scanf("%d",&x);//由此才能多次输入数字 
		printf("sum=%d",sum);
	}
	if(cnt>0){
		int i;
		double average=sum/cnt;
		for(i=0;i<cnt;i++){
			if(number[i]>average){
				printf("%d",number[i]);
			}
		}
	}
	return 0;
 } */ 
 
 //定义数组
 /*int main ()
 {
 	const int number=10;
 	int x;
 	int a [number];
 	int i;
 	for(i=0;i<number;i++){
 		a[i]=0;
	 }
 	scanf("%d",&x);
	while(x!=-1){
		for(i=0;i<number;i++){
			a[i]=x;	
			scanf("%d",&x);
	   }
	}
	printf("a[%d]:%d",i,x);
	return 0;
}*/

int main ()//程序错误 
 {
 	const int number=10;
 	int x;
 	int a [number];
 	int i;
 	for(i=0;i<number;i++){
 		a[i]=0;
	 }
 	scanf("%d",&x);
	while(x!=-1){
		if(x>=0&&x<=9){
			a[x]++;
	   }
	   scanf("%d",&x);
	}
    for(i=0;i<number;i++){
	printf("a[%d]:%d",i,x);
}
	return 0;
}

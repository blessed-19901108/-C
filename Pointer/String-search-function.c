//输出明天的日期
/*#include<stdio.h>

struct date{
	int mouth;
	int day;
	int year;
};     //结构体记得加分号

int isLeap(struct date d);         //leap闰年
int numOfDays(struct date d);

int main(int argc,char const *argv[])
{
	struct date today,tomorrow;

	printf("Enter today's date(mm dd yyyy):");
	scanf("%i %i %i",&today.mouth,&today.day,&today.year);  //下面有%i的注意事项

	if(today.day != numOfDays(today)){  //这一天不是这个月的最后一天
		tomorrow.day = today.day +1;
		tomorrow.mouth = today.mouth;
		tomorrow.year = today.year;
	}else if (today.mouth == 12){   //这一年的最后一个月，而且是这个月的最后一天（上一个if）
		tomorrow.day = 1;
		tomorrow.mouth = 1;
		tomorrow.year = today.year+1;
	}else{                          //某个月的最后一天,但不是12月
		tomorrow.day =  1;
		tomorrow.mouth = today.mouth+1;
		tomorrow.year = today.year;
	}
	printf("Tomorrrow's date is %i-%i-%i.\n",
		tomorrow.year,tomorrow.mouth,tomorrow.day);
	return 0;
}

int numOfDays(struct date d)
{
	int days;

	const int daysPerMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

	if((d.mouth == 2) && isLeap(d))  //2月有闰年的问题
		days = 29;
	else
		days = daysPerMonth[d.mouth-1]; //数组是从0开始算的，如果d.mouth是1的话，对应的是31天
	return days;
}

int isLeap(struct date d)  //判断是否是闰年
{
	int leap = 0;
	if((d.year %4 == 0&&d.year%100!=0)|| d.year%400==0)
		leap = 1;

	return leap;
}*/
/*C语言中 %d 与 %i 的区别 和注意事项
在 printf 格式串中使用时，没有区别
在 scanf 格式串中使用时，有点区别，如下：
——在scanf格式中，%d 只与十进制形式的整数相匹配。
——而%i 则可以匹配八进制、十进制、十六进制表示的整数。
——例如： 如果输入的数字有前缀 0（018、025），%i将会把它当作
八进制数来处理，如果有前缀0x (0x54),它将以十六进制来处理。
所以注意事项：
——如果你是个新手，且习惯性在数字前放个零啥的，劝你使用%d。
*/

//输入结构
/*#include<stdio.h>

struct point{
	int x;
	int y;};

void getStruct(struct point);
void outPut(struct point);
void main(){
	struct point y = {0,0};
	getStruct(y);  //将结构变量的值传入,单项传值
	outPut(y);}

void getStruct(struct point p){
	scanf("%d",&p.x);  //要从终端输入数字阿阿阿阿阿阿
	scanf("%d",&p.y);
	printf("%d,%d\n",p.x,p.y);}

void outPut(struct point p){
	printf("%d,%d\n",p.x,p.y);}*/

//1秒钟之后是什么时间（给出了现在的时间）
/*#include<stdio.h>

struct time{
	int hour;
	int minutes;
	int seconds;
};

struct time timeUpdate(struct time now);

int main(void)
{
	struct time testTimes[5] = {
		{11,59,59},{12,0,0},{1,29,59},{23,59,59},{19,12,27}
	};
	int i;

	for(i=0;i<5;++i){
		printf("Time is %.2i:%.2i:%.2i",
			testTimes[i].hour,testTimes[i].minutes,testTimes[i].seconds);

		testTimes[i] = timeUpdate(testTimes[i]);

		printf("...one second later it's %.2i:%.2i:%.2i\n",
			testTimes[i].hour,testTimes[i].minutes,testTimes[i].seconds);
	}
	return 0;
}

struct time timeUpdate(struct time now)
{
	++now.seconds;
	if(now.seconds == 60){
		now.seconds = 0;
		++now.minutes;

		if(now.minutes == 60){
			now.minutes = 0;
			++now.hour;

			if(now.hour ==24){
				now.hour = 0;
			}
		}
	}
}*/

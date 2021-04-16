/*#include<stdio.h>
#include<string.h>

int main(int argc,char const *argv[])
{
	char s[] = "hello";
	char* p = strchr(s,'l');//如果输出这个-->llo
	//p = strchr(p+1,'l'); //找到第2个
	printf("%x\n",p);//从返回的位置开始，把其后的字符当成一个字符串输出
	                 //strchr返回了一个指针给p，p储存了一个指针，p的值为什么是'llo'，下面有答案
	return 0;
}*/
/*strchr返回一个指向该字符串中第一次出现的字符的指针，这没有问题。例如：查找的字符是‘l’，
那么返回应该是‘l’这个字符的指针，可是从‘l’开始剩下的字符串即“llo”与字符‘l’的地址是
一样的（字符串地址就是第一个字符的地址），因此p也就是指向了这个字符串（保险起见吧，宁多不少），
字符指针是用来解决字符串的常用方法。
注意：标准C的返回值类型只有char*，C++还有一个int
*/

//找到'l'后将其后的拷贝到其他的地方
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char const *argv[])
{
	char s[] = "hello";
	char *p = strchr(s,'l'); 
	char *t = (char*)malloc(strlen(p)+1);
	strcpy(t,p);
	printf("%s\n",t);
	free(t);

	return 0;
}*/

//找到'l'后将其前的拷贝到其他的地方
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char const *argv[])
{
	char s[] = "hello";
	char *p = strchr(s,'l');
	char *t = (char*)malloc(strlen(s)+1);
	char c = *p;//保存原来的*p
	*p = '\0';
	strcpy(t,s);
	printf("%s\n",t);
	free(t);
	*p = c;

	return 0;
}*/


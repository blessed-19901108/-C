#include <stdio.h>
int main ()
{
	int x;
	scanf("%d",&x);
	int digit;
	int ret;
	while(x>0){
		digit = x % 10 ;
		printf ("%d\n",digit);
		ret = ret * 10 + digit;
		x /=10;
		//printf ("x = %d,digit =%d,ret =%d\n",x,digit,ret);
	}
	return 0;
}

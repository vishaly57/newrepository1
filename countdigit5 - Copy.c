#include<stdio.h>

int main ()
{
	int num, count=0;
	printf("enter a no:\n");
	scanf("%d",&num);
	
	while(num!=0)
	{
		num/=10;
		++count;
	}
	printf("number of digits in given no is:%d\n",count);
	return 0;
}

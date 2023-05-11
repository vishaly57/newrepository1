#include<stdio.h>
void convert();
int main()
{	
	convert();	
	return 0;
}
void convert()
{
	int a,c;
	printf("\n enter value :");
	scanf("%d",&a);
	c=a*a*a;
	printf("\n cube of %d=%d",a,c);
}  


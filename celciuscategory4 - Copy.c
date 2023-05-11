#include<stdio.h>
void tempcovert();
int main()
{	
	tempconvert();	
	return 0;
}
void tempconvert()
{
	int a,c;
	printf("\n enter value in fehrenheit:");
	scanf("%d",&a);
	c=((a-32)*5)/9;
	printf("\n conversion of %d fehrenheit in celcius=%d",a,c);
}  


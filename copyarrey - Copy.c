#include<stdio.h>

int main()
{
 int a[20],b[20],n,i;
 printf("enter value of n: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Enter element at a[%d]: ",i);
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  b[i]=a[i];
 }
 for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
 }
 for(i=0;i<n;i++)
 {
  printf("%d\t",b[i]);
 }
 return 0;
}

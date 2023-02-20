#include<stdio.h>
void main()
{
int n,c,a=0,b=1,i;
printf("enter a number :");
scanf("%d",&n);
printf("%d,%d",a,b);
for(i=2;i<=n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d",c);
}
}

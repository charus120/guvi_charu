#include<stdio.h>
int main()
{
int n,a,b,c,i;
a=1;
b=1;
scanf("%d",&n);
printf("%d %d ",a,b);
for(i=2;i<n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d ",c);
}
return 0;
}
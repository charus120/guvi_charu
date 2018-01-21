#include<stdio.h>
int main()
{
int n,f=1,i;
scanf("%d",&n);
for(i=2;i<=n;i++)
{
f=f*i;
}
printf("%d ",f);
return 0;
}
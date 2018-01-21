#include<stdio.h>
int main()
{
int n,s,i;
scanf("%d%d",&s,&n);
for(i=s+1;i<n;i++)
{
if(i%2==0)
printf("%d ",i);
}
return 0;
}
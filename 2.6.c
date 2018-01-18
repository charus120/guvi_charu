#include<stdio.h>
int main()
{
int a,b,i,j,c=0;
scanf("%d%d",&a,&b);
for(i=a+1;i<b;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
{
c++;
}
}
if(c==0)
printf("%d ",i);
c=0;
}
return 0;
}
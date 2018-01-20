#include<stdio.h>
int main()
{
int l,r,j,i,c,sum=0;
scanf("%d%d",&l,&r);
for(j=l;j<=r;j++)
{
c=0;
for(i=2;i<=j/2;i++)
{
if((j%i)==0)
{
c++;
break;
}
}
if(c==0)
sum++;
}
printf("%d",sum);
return 0;
}
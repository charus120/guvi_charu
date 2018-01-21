#include<stdio.h>
#include<math.h>
int main()
{
int l,r,n,rem=0,s=0,i,p,c=0,q;
scanf("%d%d",&l,&r);
for(i=l+1;i<r;i++)
{
n=i;
p=i;
s=0;
while(n>0)
{
rem=n%10;
s=s+pow(rem,3);
n=n/10;
}
if(s==p)
printf("%d ",p);
}
return 0;
}
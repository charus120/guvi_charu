#include<stdio.h>
#include<math.h>
int main()
{
int n,n1,rem=0,sum=0;
scanf("%d",&n);
n1=n;
while(n>0)
{
rem=n%10;
sum=sum+pow(rem,3);
n=n/10;
}
if(n1==sum)
printf("yes");
else
printf("no");
return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
int n,rem=0,s=0;
scanf("%d",&n);
while(n>0)
{
rem=n%10;
s=s+pow(rem,2);
n=n/10;
}
printf("%d",s);
return 0;
}
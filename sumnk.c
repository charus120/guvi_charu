#include<stdio.h>
int main()
{
int n,k,i,s=0,a[100];
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<k;i++)
s+=a[i];
printf("%d",s);
return 0;
}
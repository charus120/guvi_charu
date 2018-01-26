#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,a[100],b[100],c=0,j,i,key,x;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
x=0;
for(i=0;i<n;i++)
{
if(i==a[i])
{
b[x]=a[i];
x++;
c=1;
}
}
if(c==0)
printf("\'-1\'");
else
{
for(i=0;i<x;i++)
{
printf("%d ",b[i]);
}
}
return 0;
}
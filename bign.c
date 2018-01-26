#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,a[100],c=0,j,i,key;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]<0)
{
printf("Invalid");
exit(0);
}
}
for (i = 1; i<n; i++)
   {
       key = a[i];
       j = i-1;
       while (j >= 0 && a[j] > key)
       {
           a[j+1] = a[j];
           j = j-1;
       }
       a[j+1] = key;
   }
for(i=n-1;i>=0;i--)
{

printf("%d",a[i]);
}
return 0;
}
#include<stdio.h>
int main()
{
int a[10],i,m,n,key, j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}  
   for (i = 1; i < n; i++)
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
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}
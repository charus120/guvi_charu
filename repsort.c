#include<stdio.h>
int main()
{
int n,a[100],c=0,j,i,key;
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
for(i=0;i<n-1;i++)
{
if(a[i]==a[i+1])
{
printf("%d ",a[i]);
i++;
c++;
}
}
return 0;
}
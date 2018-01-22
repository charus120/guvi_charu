#include<stdio.h>
int main()
{
int a[10],i,n,j,key;float m;
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
    if (n % 2 != 0)
       m=(double)a[n/2];
else     
   m=(double)(a[(n-1)/2] + a[n/2])/2.0;
printf("%f",m);
return 0;
}
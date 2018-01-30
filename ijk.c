#include<stdio.h>
int main()
{
int n,a[10],i,j,k;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				if(a[i]+a[j]==a[k])
				{
					printf("%d %d %d\n",a[i],a[j],a[k]);
				}
			}
		}
	}
return 0;
}
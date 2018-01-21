#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100],b[100];
	int i,m,n,c=0;
	scanf("%s %s",a,b);
	m=strlen(a);
	n=strlen(b);
	if(m==n)
	{
		for(i=0;i<m;i++)
		{
			
			if(a[i]!=b[i])
			{
				c=c+1;
			}
			
		}
		if(c==1)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}
	else
	{
		printf("no");
	}
	return 0;
}
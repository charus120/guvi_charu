#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j,k,n=1000000;
	char a[n],b[n];
	gets(a);
	gets(b);
	for(i=0;i<(strlen(a)<strlen(b)?strlen(a):strlen(b));i++)
	{
		if(a[i]==b[i])
		{
			printf("%c",a[i]);
		}
		else
		{
break;
	
		}
	}
	return 0;
}
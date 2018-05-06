#include<stdio.h>
#include<string.h>
int main()
{
char Str1[10],Str2[10];
int i,f=0;
scanf("%s%s",Str1,Str2);
	for(i = 0;Str1[i]!= '\0'; i++)
	{
		if(Str1[i]<Str2[i])
   		{
f=1;
			puts(Str2);
   		break;
		}
		else if(Str1[i] > Str2[i])
   		{
f=1;
   			puts(Str1);
break;
		}
		else
   		{
			continue;
		}
	}
if(f==0)
printf("%s",Str1);
return 0;
}
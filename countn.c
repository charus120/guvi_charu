#include<stdio.h>

int main()
{
char s[20];
int c=0,i=0;
gets(s);
while(s[i]!='\0')
{
if(s[i]>=48&&s[i]<=57)
{
c++;
i++;
}
else
{
i++;
}
}
printf("%d",c);
return 0;
}
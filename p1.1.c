#include<stdio.h>
#include<string.h>
int main()
{
char str[100000];int i;
scanf("%s",&str);
for(i=strlen(str)-1;i>=0;i--)
{
if(str[i])
{
printf("%c",str[i]);
}
}
return 0;
}
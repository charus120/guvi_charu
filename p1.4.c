#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
scanf("%s",&s);
strcat(s,".");
printf("%s",s);
return 0;
}
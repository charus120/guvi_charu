#include<stdio.h>
#include<string.h>
int main()
{
char s[100],temp,i;
scanf("%s",&s);
for(i=0;i<strlen(s);i+=2)
{
temp=s[i];
s[i]=s[i+1];
s[i+1]=temp;
}
printf("%s",s);
return 0;
}
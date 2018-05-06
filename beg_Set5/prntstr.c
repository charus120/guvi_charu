#include<stdio.h>
#include<string.h>
int main()
{
char s[100];int n,i,j;
scanf("%s",&s);
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<strlen(s);j++)
printf("%c",s[j]);
printf("\n");
}
return 0;
}
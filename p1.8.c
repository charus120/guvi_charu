#include<stdio.h>
#include<string.h>
int main()
{
char s[100],temp,i;
fgets(s,100,stdin);
if (s[0] >= 'a' && s[0] <= 'z') {
         s[0] = s[0] - 32;
      }
for(i=1;i<strlen(s);i++)
{
if(s[i]==' ')
{
  if (s[i+1] >= 'a' && s[i+1] <= 'z') {
         s[i+1] = s[i+1] - 32;
      }
}
}
printf("%s",s);
return 0;
}
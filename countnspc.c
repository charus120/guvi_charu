#include<stdio.h>

int main()
{
char str[20];
int c=0,i=0;
gets(str);
while(str[i]!='\0')
{
if(((str[i]>='A')&&(str[i]<= 'Z'))||((str[i] >= 'a')&&(str[i] <= 'z'))||((str[i]>='0')&&(str[i]<='9')))
{
i++;
continue;
}
else
{
c++;
i++;
}
}
printf("%d",c);
return 0;
}
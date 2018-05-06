#include<stdio.h>
#include<string.h>
int main()
{
char Str1[10],Str2[10];
int i=0,f=0;
scanf("%s%s",Str1,Str2);

while(Str1[i]!= '\0')
{
printf("%c",Str1[i]);
i++;
}
i=0;
while(Str2[i]!= '\0')
{
printf("%c",Str2[i]);
i++;
}

return 0;
}
#include<stdio.h>
int main()
{
char n;
scanf("%c",&n);
if(isalpha(n))
printf("Alphabet");
else
printf("Not an alphabet");
return 0;
}
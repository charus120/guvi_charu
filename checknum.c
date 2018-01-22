#include<stdio.h>
#include<string.h>
int main()
{
char string[10];int c=0;
scanf("%s",&string);
 for(int i = 0; i < strlen( string ); i ++)
   {
      if (string[i] < 48 || string[i] > 57)
       {
  printf("No");
c++;
break;
   }
}
if(c==0)
printf("Yes");
return 0;
}
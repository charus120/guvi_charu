
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
   char c[30];
   int a[30], l, i, k, dec;
   gets(c);
   strupr(c);
   l =strlen(c);
   for(i = 0; i < l; i++)
   {
      switch (c[i])
      {
     case 'I':  a[i] = 1;
            break;
     case 'V':  a[i] = 5;
            break;
     case 'X':  a[i] = 10;
     		break;
case 'L':  a[i] = 50;
     		break;
case 'C':  a[i] = 100;
     		break;
case 'D':  a[i] = 500;
     		break;
case 'M':  a[i] = 1000;
     		break;
     default :  printf("Invalid Input");
            break;
      }
   }
   k = a[l - 1];
   for(i = l - 1; i > 0; i--)
   {
      if(a[i] > a[i - 1])
      {
     k = k - a[i - 1];
      }
      if(a[i] <= a[i - 1])
      {
     k = k + a[i - 1];
      }
   }
   printf("%d", k);
}
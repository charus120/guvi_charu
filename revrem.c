
#include<stdio.h>

#include<string.h>

int main()

{

char a[100]={'\0'};

int i;

gets(a);

for(i=strlen(a)-1;i>=0;i--)

{

if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U')

{

printf("%c",a[i]);

}

else

continue;

}

return 0;

}

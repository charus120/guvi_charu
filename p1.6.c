#include<stdio.h>
#include<string.h>
int isomorphic(char *s1,char *s2,int m,int n)
{
int i,j;
if(m!=n)
return 0;
int mark[256]={0};
int map[256];
memset(map, -1, sizeof(map));
for(i=0;i<n;i++)
{
if(map[s1[i]]==-1)
{
if(mark[s2[i]]==1)
return 0;
mark[s2[i]]=1;
map[s1[i]]=s2[i];
}
else if(map[s1[i]]!=s2[i])
return 0;
}
return 1;
}
int main()
{
char s1[100],s2[100],temp,i,m,n;
scanf("%s",&s1);
scanf("%s",&s2);
n=strlen(s2);
m=strlen(s1);
printf("%s",isomorphic(s1,s2,m,n)==1?"yes":"no");
return 0;
}

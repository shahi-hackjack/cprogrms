#include<stdio.h>
#include<string.h>
int main()
{

int t ;
scanf("%d",&t);

while(t--)
{
char L[2][10];
int count=0;
scanf("%s %s",L[0],L[1]);
int x=strlen(L[0]);
for(int i=0;i<10;i++)
{
if(L[0][i]==L[1][i])
{
count++;}
if(L[0][i]=='?'||L[1][i]=='?')
count++;

}
if(count!=x)
printf("Yes\n");

else
printf("No\n");

}


return 0 ;}

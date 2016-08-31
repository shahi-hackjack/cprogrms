#include<stdio.h>
#include<algorithm>
#include<string.h>
#define v 1000000
int min1(int a,int b)
{
    return (a>b)?b:a;
}

int main()
{

int t ,i;
scanf("%d",&t);

while(t--)
{
    char str[2][1000000];

    scanf("%s %s",&str[0],&str[1]);
  //  printf("%s\n",str[0]);
//    printf("%s",str[1]);
   int x=strlen(str[0]);
  // printf("%d",x);
   int T[2][x+1];
   T[0][0]=0;
   T[1][0]=0;
   for(i=1;i<x+1;i++)
   {
       if(str[0][i-1]=='.')
       {
      T[0][i]=min1(T[0][i-1],T[1][i-1]+1);
       }
       if(str[0][i-1]=='#')
        {T[0][i]=v;}

 //printf("%d\n",T[0][i]);

  if(str[1][i-1]=='.')
       {
      T[1][i]=min1(T[1][i-1],T[0][i-1]+1);
       }
       if(str[1][i-1]=='#')
        T[1][i]=v;
//printf("%d\n",T[1][i]);

   }
int ans=min1(T[0][x],T[1][x]);

if(ans==v)
   printf("No\n");
else
    printf("Yes %d\n",ans);


}
return 0 ;}

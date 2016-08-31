#include<bits/stdc++.h>

int F(int n,int  k, int answer,char c[],int A[])
{

    for(int i=1;i<=k;i++)
     {for(int j=0;j<n;j++)
    { if(c[0]=='X')
         {answer=answer^A[j];
         printf("m working");
           printf("%d",answer);
         }
         else if (c[0]=='O')
            answer=answer|A[j];
         else
            answer=answer&A[j];

    }
     }


    return answer;
}


int main()
{
int t;
scanf("%d",&t);
long long int k ,n,answer;
char op[3];
while(t--)
{
   scanf("%lld %lld %lld %s",&n,&k,&answer);
   getchar();
   int A[n];
   for(int i=0;i<n;i++)
    scanf("%d",&A[i]);
   scanf("%s",&op);
   long long int x=F(n,k,answer,op,A);
       printf("%lld\n",x);




}




}

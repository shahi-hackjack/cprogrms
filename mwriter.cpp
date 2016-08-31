#include<bits/stdc++.h>
#define max  1000000001
unsigned long long int n,m;

int min(int A,int B)
{
    return(A>B?B:A);
}
int main()
{

scanf("%lld %lld",&n,&m);
unsigned long long int A[n],T[n];
for(int i=0;i<n;i++)
{
scanf("%lld",&A[i]);
T[i]=max;
}
T[0]=0;



for(int i=1;i<n;i++)
{
    for(int j=0;j<i;j++)
       {if(A[i]<=A[j]+m)
          {T[i]=min(T[i],T[j]+1);
            //printf("%d   %d\n",j,min(T[i],T[j]+1));}
     //   printf("%d\n",A[j]);}
}
}
}
for(int i=0;i<n;i++)
{
printf("%lld",T[i]);
}



return 0;}

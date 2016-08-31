#include<iostream>
#include<stdio.h>
#define s scanf
#define p printf


int main()
{

int t ;
long long int n;
s("%d",&t);

while(t--)
{
s("%lld",&n);

long long int prevodd=0;
long long int preveven=0;
int sign=-1,sin=-1;
long long int x  ;
for(long long int i=1;i<=n;i++)
     {
     if(i%2!=0)
       {
       sign=sign*-1;
        x=sign*i;

   prevodd+=x;
              }
 else
 {   sin=sin*-1;
     x=sin*i;
  //   p("%d",x);
     preveven+=x;
//     p("%lld",preveven);

 }

            }

printf("%lld %lld\n",prevodd,preveven);

}

return 0;}

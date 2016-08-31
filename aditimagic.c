#include<stdio.h>

long long int fib(long long int n);

int main()
{
int t;
scanf("%d",&t);

while(t--)
{
long long int n;
scanf("%lld",&n);
printf("%lld\n",fib(n));


}
return 0;}

long long int fib(long long int n)
{
if(n==1)
{
return 1;
}
if(n==2)return 2;
long long int i=2,j ,sum1=2,sum2=3;
while(1)
{
if(n>=sum1&&n<sum2)
  return i;

  else
  {
  j=sum1;
  sum1=sum2;
  sum2+=j;


  i++;}
}

return i ;
}







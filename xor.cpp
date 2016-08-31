#include<stdio.h>

int main()
{



int t;
scanf("%d",&t);


while(t--)
{

unsigned long long int n ;
scanf("%lld",&n);
int flag=-1;
unsigned long long int i=1 ,j=2,sum ;
sum=i+j;
while(n>=sum)
{
if(n==sum)
{
flag=1;

break;}
else
{
i=sum;
j=j*2;
sum=i+j;
}
}

if(flag==1)
{
printf("%lld\n",j-1);
}
else
    {printf("%d\n",flag);}
}





return 0 ;}

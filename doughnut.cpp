#include <bits/stdc++.h>
#include<algorithm>
int main(){
int  t ;
scanf("%d",&t);

while(t--)
{

long long int n , m;
scanf("%lld %lld",&n,&m);
int A[m];


for(int i=0 ;i<m;i++)
{
    scanf("%d",&A[i]);
}

std::sort(A,A+m);
long long int count=0, sum=m-1;
for(int i=0;i<m;i++)
{
    if(sum-A[i]>0)
        {
            count+=A[i];
            sum=sum-A[i]-1;
        }
    else
        break;
}


printf("%lld\n",sum+count);

}


return 0;}

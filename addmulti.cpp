#include<bits/stdc++.h>

int main()
{
    int t ;
    scanf("%d",&t);
    while(t--)
    {
        int n,count=0 ;
        scanf("%d",&n);
        int A[n];
       int sum=n*(n-1)/2;
       std::cout<<sum;
        for(int i=0;i<n;i++)
             {
                 scanf("%d",&A[i]);
                 if(A[i]==1)
                 {
                     sum-=n-i-1;
                 }
                 else if(A[i]==2)
                 {   //printf("i worked for %d",i+1);
                     count++;
                 }
             }
        count=count*(count-1)/2;
        sum-=count;

        printf("%d",sum);

    }






    return 0 ;
}

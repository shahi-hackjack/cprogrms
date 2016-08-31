#include<bits/stdc++.h>

int main()
{
    int t ,n,m;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&m);
        int A[n];
 int i ;
        for(i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
        }

        std::sort(A,A+n);
       long long int sum=0;
    for(i=0;i<n-1;i++)
        sum+=A[n-1]-A[i];

        if(sum>m)
    {
        printf("No\n");
    }
        else{

            sum=sum-m;
            if(sum%n==0)
            {
                printf("Yes\n");
            }
            else
                printf("No\n");

        }

    }



    return 0 ;
}

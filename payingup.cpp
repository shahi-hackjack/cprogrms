#include<stdio.h>
#include<algorithm>


int main()
{
unsigned long long int t;
int i,j;
scanf("%llu",&t);



while(t--)
{
    int n;
    scanf("%d",&n);

    int A[n+1];
    A[0]=0;
  unsigned long long  int m;
   scanf("%lld",&m);
 for(i=1;i<n+1;i++)
 {
    scanf("%d",&A[i]);
 }
std::sort(A,A+n);
int T[n+1][m+1];

  for(i=0;i<n+1;i++)
  {
       for(j=0;j<m+1;j++)
         {
            if(i==0)
           { T[i][j]=0;
            //printf("%d ",T[i][j]);

            }
            else if(j<A[i])
            {
            T[i][j]=T[i-1][j];
            //printf("%d ",T[i][j]);

            }
            else if(j==A[i])
            {
                T[i][j]=1;
             //    printf("%d ",T[i][j]);
            }
            else {

            T[i][j]=T[i-1][j-A[i]];
           //printf("%d ",T[i][j]);
            }
         }
         //printf("\n");
  }
int flag=0;
for(i=0;i<n+1;i++)
{
    if(T[i][m]==1)
        flag=1;
   }
if(flag==1)
    printf("Yes\n");
else
    printf("No\n");


}


return 0;}

#include<bits/stdc++.h>
#include<algorithm>

int main()
{
  long long int test ;
  scanf("%lld",&test);
  while (test--)
  {
      int n;
      scanf("%d",&n);
      int row[n*n],col[n*n],num;
      int res=0;

      for(int i=0;i<n;i++)
      {

          for(int j=0;j<n;j++)
          {
              scanf("%d",&num);
              row[num-1]=i;
              col[num-1]=j;
          }
      }
      for(int i=1;i<n*n;i++)
      {
          res+=abs(row[i]-row[i-1])+abs(col[i]-col[i-1]);


      }



      printf("%d\n",res);

  }




    return 0;
}

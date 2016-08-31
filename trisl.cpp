#include<bits/stdc++.h>


int main()
{
int t ,n;
scanf("%d",&t);

while(t--)
{
scanf("%d",&n);

    int A,row[n^n],col[n^n];
  int sum=0;
  for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
           scanf("%d",&A);
           row[A-1]=i+1;
           col[A-1]=j+1;
       }
    }

    for(int i=1;i<n*n;i++)
    {
        sum+=(abs(row[i]-row[i-1])+col[i]-col[i-1]);
    }
    printf("%d\n",sum);
}



return 0 ;}

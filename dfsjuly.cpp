#include<bits/stdc++.h>

using namespace std;
int V[10],n,A[10][10];

void dfs(int i)
{ int  j;
printf("%d",i);
V[i]=1;
for(j=0;j<n;j++)
   {
     if(V[j]==0&&A[i][j]==1)
         dfs(j);


    }




}



int main()
{

//int  n ;
//int A[10][10];
cin>>n ;
for(int i=0;i<n;i++)
 {   for(int j=0;j<n;j++)
       {
      cin>>A[i][j];

       }
}

dfs(0);







return 0;}


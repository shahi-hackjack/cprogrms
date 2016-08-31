#include<bits/stdc++.h>
using namespace std;

int main()
{

int n, A[20][20],v[20];
std::cin>>n;


for(int i=0;i<n;i++)
   {
   for(int j=0;j<n;j++)
      {
      cin>>A[i][j];
      if(A[i][j]==0)
      A[i][j]=999;

      }


   }
   int V[20],D[20],P[20];
   V[1]=1;
   for(int i=0;i<n;i++)
   {
    D[i]=A[1][i];
    P[i]=1;
   }


   int ne=1,next,i;
   while(ne<n)
   {  int min=999;
       for(i=0;i<n;i++)
   {      if(D[i]<min&&V[i]==0)
             {
                 min=D[i];
                 next=i;
             }

   }

   V[next]=1;

   for(i=0;i<n;i++)
   {  if(V[i]==0)
       {if(min+A[next][i]<D[i]&&V[i]==0)
       {
           D[i]=min+A[next][i];
       }
       }
   }


   ne++;


   }


   for(int i=0;i<n;i++)
   {
       printf("D[i]=%d",D[i]);

   }

   return 0;}

#include<bits/stdc++.h>

using namespace std ;

int v[20],q[20],front=-1,rear=-1;

void insert(int x)
{
   //printf("fr=%d",front);
if(front==-1)
  { q[++front]=x;
   rear++;
}
 else
     q[++rear]=x;
}

int del()
{
    if(front==rear)
    {   rear=-1;
        int temp= q[front];
          front=front-1;
        return temp;
    }
    else
    {
        return q[front++];
    }


}

int bfst(int A[20][20],int n )
{
    int u=del();

    for(int j=0;j<n;j++)
    {
        if(A[u][j]!=0 && v[j]==0)
           {     v[j]=1;
               insert(j);
                printf("%d",j);
           }
    }
   return u;
    }








void bfs(int A[20][20],int sv,int n)
{
    v[sv]=1;
       //printf("fr=%d",front);
    insert(sv);
    int x=bfst(A,n);

    //printf("fr=%d",front);
    while(front!=-1)
    { //printf("aflkjfka");

        printf("%d",x);
        x=bfst(A,n);
        //printf("%d",x);


    }




}




int main()
{
int n;

int A[20][20];
cin>>n;



for(int i=0;i<n;i++)
   {
   for(int j=0;j<n;j++)
      {
      cin>>A[i][j];

      }


   }


bfs(A,0,n);


return 0 ;}

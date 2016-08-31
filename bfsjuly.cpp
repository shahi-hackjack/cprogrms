#include<bits/stdc++.h>
using namespace std;

int q[20],v[20],rear=-1,front=-1;

void insert(int no)
   {
       if(front==-1)
       {
           rear++;
           front++;
           q[front]=no;
           cout<<"the no inserted at "<<"Q["<<front<<"]="<<q[front]<<"\n";

       }
       else
       {

           q[rear++]=no;
          cout<<"the no inserted at "<<"Q["<<rear<<"]="<<q[rear]<<"\n";
       }
   }
  int del()
    {
        if(front==rear)
        {   int temp=q[front];
            cout<<"the no deleted at "<<"Q["<<front<<"]="<<q[front];
            front=-1;
            rear=-1;
            return temp;
        }
        else
            {
                cout<<"the no deleted at "<<"Q["<<front<<"]="<<q[front];
            return q[front++];
             }

    }






int bfst(int A[20][20],int n)
   {
        int u=del();
        //printf("u=%d",u);
     int  i ;
       for(i=0;i<n;i++)
       {   cout<<"A["<<u<<"]["<<i<<"]"<<A[u][i]<<" v["<<i<<"]"<<v[i];

           if(A[u][i]==1&&v[i]==0)
           {
               v[i]=1;
               insert(i);
           }


       }

        return u ;




   }




void bfs(int A[20][20],int sv,int n )
  {
     v[sv]=1;
     insert(sv);
     int x=bfst(A,n);
    int s[n];
int     k=0;
    s[k]=x;


     while(front!=-1)
     {
        x=bfst(A,n);
        s[++k]=x;

     }

     if(k!=n-1)
     {
         cout<<"GRAPH NOT CONNECTED";
     }
     else{
        for(int i=0;i<n;i++)
        {
            //cout<<s[i];

        }
     }




  }



int main(){
int n;

int A[20][20];
cin>>n;

for(int i=0;i<20;i++)
{
    v[i]=0;
}


for(int i=0;i<n;i++)
   {
   for(int j=0;j<n;j++)
      {
      cin>>A[i][j];

      }


   }


bfs(A,0,n);





return 0 ;

}

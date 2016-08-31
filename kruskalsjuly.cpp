#include<bits/stdc++.h>

using namespace std;
int lookup[10],parent[10];

int find(int u)
{
 cout<<"\nu="<<u;
       while(parent[u]!=u)
    {
        u=parent[u];
    }
    return u;

}
void kruskals(int c[10][10],int source,int n)
{
   int u,v,cost=0;

   for(int i=0;i<n;i++)
   {
       parent[i]=i;

   }

   int small,ne=1;
   while(ne<=n-1)
    {  small=9999;
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(c[i][j]<small)
              {
                small=c[i][j];
                u=i;v=j;
              }
        }

    }


//u=find(u);
  // v=find(v);
   if(find(u)!=find(v))
   {  cout<<"cost="<<cost<<"cuv= "<<c[u][v];
       cost+=c[u][v];
 //cout<<"i wordjer "<<u<<v;
     parent[u]=v;
     ne++;

   }
c[u][v]=9999;
c[v][u]=9999;

    }

    cout<<"cost="<<cost;

   }






int main()
{
int n,x,y,val ;
cin>>n;
int c[10][10],source ;
cin>>source;

for(int i=0;i<n;i++)
    {
     for(int j=0;j<n;j++)
        {
        cin>>c[i][j];
        if(c[i][j]==0)
        {
            c[i][j]=9999;
        }
        }

    }


kruskals(c,source,n);






return 0;
}

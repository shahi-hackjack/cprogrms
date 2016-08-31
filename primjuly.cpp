#include<bits/stdc++.h>

using namespace std;

void dijsktra(int c[][10],int n,int source)
{
int visited[n];
int dist[n],pred[n];
int cost=0;
for(int i=0;i<n;i++)
{
    pred[i]=source;
    visited[i]=0;
    dist[i]=c[source][i];
}
dist[source]=0;

visited[source]=1;
int ne=1;
while(ne<=n-1)
{
    int small=9999;
    int pos;
    for(int i=0;i<n;i++)
    {
        if(dist[i]<small&&!visited[i])
        {small=dist[i];
        pos=i;
        }
    }
 cost+=small;

    visited[pos]=1;
    for(int i=0;i<n;i++)
    { if(!visited[i])
       {if(dist[i]>c[pos][i])
            dist[i]=c[pos][i];


       }
    }

ne++;

}


 cout<<"\ncost="<<cost;



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

dijsktra(c,n,source);






return 0;
}

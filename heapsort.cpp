#include<bits/stdc++.h>

using namespace std ;



void heapify(int A[],int i,int N)
 {
     int left=2*i;
     int right=2*i+1;
     int smallest;
     if(left<=N&&A[left]>=A[i])
        smallest=left;
     else
        smallest=i;
    if(right<=N&&A[right]>=A[smallest])
        smallest=right;

    if(smallest!=i)
    {
        int temp=A[i];
        A[i]=A[smallest];
        A[smallest]=temp;
        //heapify(A,smallest,N);
    }
}

void buildheap(int A[],int N)
 {
    for(int i=N/2;i>=1;i--)
    {
        heapify(A,i,N);
    }
        int temp=A[1];
        A[1]=A[N];
        A[N]=temp;
}

void heapsort(int A[],int N)
{
     int n=N;
     for(int i=0;i<n-1;i++)
      {
          buildheap(A,N);
          N=N-1;

      }

}



int main()
{
    int A[8]={0,101,44,33,17,8,2,1};//index startinf from 1 so A[0]=0 is taken it has no value

    heapsort(A,7);

    for(int i=1;i<=7;i++)
        std::cout<<A[i]<<" ";






    return 0 ;
}




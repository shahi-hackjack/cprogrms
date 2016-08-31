#include<bits/stdc++.h>
using namespace std;
int B[10][10];

int safe(int row,int col,int n)
 {  int i,j;
     for(i=row;i>=0;i--)
       {
              // cout<<"B["<<i<<"]["<<col<<"]="<<B[i][col];
         if(B[i][col])
           {
               cout<<"B["<<i<<"]["<<col<<"]="<<B[i][col]<<" i worked straight up\n";
           return 0;//check for upper straight valuese
       }


       }
     //check for upleeft diagnoal
     for(i=row,j=col;i>=0&&j>=0;i--,j--)
     {
         if(B[i][j])
       {

               cout<<"B["<<i<<"]["<<j<<"]="<<B[i][j];
                cout<<"i worked upleftdiagnol\n";
         return 0;
       }
     }

          for(i=row,j=col;i>=0&&j<n;i--,j++)
     {
         if(B[i][j])
            {
               cout<<"B["<<i<<"]["<<j<<"]="<<B[i][j];
               cout<<"i worked uprightdiagnol\n";
                return 0;
            }
     }


     return 1;
 }




int solvenq(int row,int n)
{  int i;
    if(row>=n)
        return 1;

    for(i=0;i<n;i++)
    {
        if(safe(row,i,n))
            {B[row][i]=1;
            cout<<"QUEEN NO:"<<row+1<<" IS PLACED AT :"<<"ROW="<<row<<"col"<<i<<"\n";
            if(!solvenq(row+1,n))
             {
                 cout<<"\nB["<<row<<"]["<<i<<"]="<<B[row][i];

               B[row][i]=0;
               cout<<"fallback"<<B[row][i];
             }
             else
                  {
                      return 1;

                  }
            }




    }

     return 0;
}



int main()
{
int n,i,j;
cin>>n;


if(solvenq(0,n))
{
 for(i=0;i<n;i++)
 {
     for(j=0;j<n;j++)
        if(B[i][j]==0)
          cout<<" - ";
         else
           cout<<"Q";

  cout<<"\n";
 }
}
else
{
    cout<<"CAN NOT BE PLACED";

}
//cout<<B[0][8];











return 0;}

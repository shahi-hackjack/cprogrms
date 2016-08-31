#include<bits/stdc++.h>

using namespace std ;


void rabinkarp(string text,string pat)
{
  int t=text.size();
  int p=pat.size();

  int thash=0;
  int phash=0;
  int prime=3;

  for(int i=0;i<p;i++)
  {
      phash=phash+(int(pat[i])*pow(prime,i));
      thash=thash+(int(text[i])*pow(prime,i));
   }
cout<<"phash="<<phash;
cout<<"\nthash="<<thash;

int j ;
for(int i=0;i<=t-p;i++)
{
   if(thash==phash)
     {
        for( j=0;j<p;j++)
        {
            if(text[i+j]!=pat[j])
               break;
        }
       if(j==p)
     {
         cout<<"pattern at "<<i<<endl;
     }

     }
 printf("thash=%d\n",thash);
    thash=thash-int(text[i]);
     printf("thash-int=%d\n",thash);
    thash=thash/prime;
     printf("thash/prime=%d\n",thash);
    thash=thash+(int(text[i+1])*pow(prime,p-1));
 printf("thash=%d\n",thash);


}









}





int main()
{

string pat,text ;

getline(cin,text);
getline(cin,pat);



rabinkarp(text,pat);





return 0 ;}


#include<bits/stdc++.h>
using namespace std;


void horspol(char text[],char pat[])
{
int i;
for( i=0;text[i]!='\0';i++);
int n=i;
for(i=0;pat[i]!='\0';i++);
int m=i;

int shift[128];
for(i=0;i<128;i++)
{
    shift[i]=m;

}

for(i=0;i<m;i++)
{
    shift[pat[m]]=m-i-1;

}

i=m-1;
while(i<n)
{
    int k=0;

while(text[i-k]==pat[m-k-1])
{
    k++;

}
    if(k==m)
       {

        cout<<"FOUND AT POS ="<<i-k+2;
         return;
       }
    else
    {
        i+=shift[pat[k]];
            }





}

cout<<"NOT FOUND";
}

int main()
{

char pat[20],text[20];
gets(text);
gets(pat);


horspol(text,pat);






//cout<<text;
//cout<<pat;






return 0 ;

}

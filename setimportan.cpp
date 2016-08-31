#include<bits/stdc++.h>
#define gc getchar

using namespace std ;




int main()
{

int t ;
scanf("%d",&t);

while(t--)
{
string j ,s;
cin>>s;
cin>>j;
int count=0;
set<char> S(s.begin(),s.end());
for(int i=0;i<j.size();i++)
    if(S.count(j[i]))
{
    count++;
}
printf("%d\n",count);
}
return 0 ;}

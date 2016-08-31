#include<stdio.h>
#include<algorithm>
#include<iostream>

using namespace std ;
int min1(int a, int b, int c)
{
    int x=std::min(a,b);
     int m=std::min(x,c);
//     printf("%d",m);

return m;
}

int main()
{
int UGLY[150];
UGLY[0]=1;

int i2,i3,i5,i;
 i=i2=i3=i5=1;
 int n2,n3,n5;
     n2=UGLY[0]*2;
     n3=UGLY[0]*3;
     n5=UGLY[0]*5;
 for(i=1;i<15;i++)
 {


UGLY[i]=min1(n2,n3,n5);
printf("%d",UGLY[i]);
if(UGLY[i]==n2)
{ i2=i2+1;
   n2=i2*2;

}
if(UGLY[i]==n3)
 { i3=i3+1;
   n3=i3*3;

}

if(UGLY[i]==n5)
{ i5=i5+1;
   n5=i5*5;

}




 }





return 0;}

#include<bits/stdc++.h>

int main()
{
int t , n ,m;
scanf("%d",&t);


while(t--)
{int min=100001;
int max=-min;
scanf("%d%d",&n,&m);
while(m--)
{int x;
scanf("%d",&x);

min=std::min(x,min);
max=std::max(x,max);

}
for(int i=0;i<n;i++)
{
    printf("%d",std::max(abs(i-min),abs(i-max)));
}
printf("\n");

}





return 0;

}

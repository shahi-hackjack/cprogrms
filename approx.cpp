#include<bits/stdc++.h>

int main(){



int num=103993,den=33102;

for(int i=0;i<1000001;i++)
{
     int rem=num%den;
     A[i]=num/den;

 rem=rem*10;
 num=rem;
}


int k,t;

scanf("%d",&t);
while(t--){

    scanf("%d",&k) ;
int flag=0;
 for(int i=0;i<=k;i++)
     if(k!=0)
      {    if(flag==0)
            {printf("%d.",A[i]);
            flag=1;
            }
             else
                printf("%d",A[i]);


      }
     else
        printf("%d",A[i]);
printf("\n");
   }


return 0;}

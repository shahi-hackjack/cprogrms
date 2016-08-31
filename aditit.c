#include<stdio.h>


int main()
{



 int t,n;
 scanf("%d",&t);
 while(t--)
 {   int diff;
    scanf("%d",&n);
    if(n==1||n==2||n==3)
        printf("%d\n",n);
     else if(n>=4&&n<=7)
        printf("%d\n",n-2);
     else if (n==8||n==9)

        printf("%d\n",n-3);
     else if (n==10)
         printf("%d\n",n-3);
 }


}

#include <bits/stdc++.h>

using namespace std;
int r[1000000]={0},c[1000000]={0};

int main() {
	int n, q;
	cin>>n>>q;

	int rmax=0, cmax=0;
	while(q--){
	int a,x;
	char s[20];
	scanf("%s %d %d",s,&a,&x);
	if(s[0]=='R'){
	        r[a-1]+=x;
	        if(r[a-1]>rmax)
	            rmax=r[a-1];
	    }
	    else{
	        c[a-1]+=x;
	        if(c[a-1]>cmax)
	            cmax=c[a-1];
	    }}
	    cout<<rmax+cmax;


	}

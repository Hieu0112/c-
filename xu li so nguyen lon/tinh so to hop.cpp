#include<bits/stdc++.h>
using namespace std;
long long p=1e9+7;
long long power(long long x, long long y){
    long long res = 1;
	while(y>0){
        if(y&1) res=(res*x)%p;
        y=y>>1;
        x=(x*x)%p;
    }
    return res;
}
long long mod(long long n){
    return power(n,p-2);
}
main()
{
	int t,n,r,i,k;
	cin>>t;
	long long a[1000];
	while(t--)
	{a[0]=1;
		cin>>n>>r;
		if(r<0) cout<<"0";
		else if(r==0) cout<<"1";
		else{
		k=n-r;
		 for(int i=1;i<=n;i++) a[i]=(a[i-1]*i)%p;
		cout<<(a[n]*mod(a[r])%p*mod(a[n-r])%p)%p;
	}
	cout<<endl;
}
}

#include<bits/stdc++.h>
using namespace std;
bool nt_cungnhau(long long a,long long b)
{
	long long sum_a=(a*(a+1))/2;
	long long sum1=(sum_a+b)/2;
	long long sum2=sum_a-sum1;
	if(sum_a<b) return false;
	else{
		if(sum1+sum2==sum_a&&sum1-sum2==b) 
		return (__gcd(sum1,sum2)==1);
		return false;
	}
}
main()
{
	int t;
	long long a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
	int x=nt_cungnhau(a,b);
	if(x==1) cout<<"Yes";
	else cout<<"No";
		cout<<endl;
	}
}

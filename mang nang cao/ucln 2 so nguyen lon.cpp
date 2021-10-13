#include<bits/stdc++.h>
using namespace std;
long long GCD(long long a,long long b)
{
	while(a*b!=0)
	{
		if(a>=b) a%=b;
		else b%=a;
	}
	return a+b;
}
long long a_mod_b(long long a,string b)
{
	int i,n=b.length(),k;
	long long mod=0;
	for(i=0;i<n;i++)
	{
		mod=(10*mod + b[i]-'0')%a;
	}
	return mod;
}
long long in(long long a,string b)
{
	long long b_moi=a_mod_b(a,b);
	return GCD(a,b_moi);
}
main()
{
	int t;
	long long a;
	string art;
	cin>>t;
	while(t--)
	{
		cin>>a;
		cin>>art;
		cout<<in(a,art)<<endl;
	}
}

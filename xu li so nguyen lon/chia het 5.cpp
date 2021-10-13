#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		fflush(stdin);
		long x=0;
		string a;
		cin>>a;
		long long n=a.length();
		for(long long i=0;i<n;i++)
		{
		x=(2*x+a[i]-'0')%5;
		}
		if(x==0) cout<<"Yes\n";
		else cout<<"No\n";
	}
}

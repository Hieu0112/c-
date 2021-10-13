#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,n,i;
	long long s,x;
	cin>>t;
	while(t--)
	{
		s=0;
		string a;
		cin>>a;
		cin>>x;
		n=a.length();
		for(i=0;i<n;i++)
		{
			s=(s*10+(a[i]-'0'))%x;
		}
		cout<<s<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
main()
{
	short t;
	string a;
	cin>>t;
	while(t--)
	{
	fflush(stdin);
	cin>>a;
	long long i,n=a.length();
	long sum_chan=0,sum_le=0;
	for(i=0;i<n;i++)
	{
		if(i%2==0) sum_chan+=(a[i]-48);
		else sum_le+=(a[i]-48);
	}
	long hieu=sum_chan-sum_le;
	if(hieu%11==0) cout<<1<<endl;
	else cout<<0<<endl;
	}
}

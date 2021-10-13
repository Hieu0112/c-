#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
	long long maxs=-10000,max=1;
	long long a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++)
	{
		max=1;
		for(int j=i;j<n;j++)
		{
			max*=a[j];
			if(max>maxs) maxs=max;
		}
	}
	cout<<maxs<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,i,k,x,y,j;
		cin>>n>>k;
		k--;
		long a[n+1];
		for(i=0;i<n;i++) cin>>a[i];
		long maxs=a[0];
		for(i=0;i<=k;i++)
		maxs=max(maxs,a[i]);
		cout<<maxs;
		for(i=1;i<n-k;i++)
		{
			x=i-k,y=i+k;
			if(x<=0) x=0;
			if(maxs>a[i-1]) maxs=max(maxs,a[y]);
			if(maxs==a[i-1])
			{	maxs=0;
				for(j=x;j<=y;j++)
				maxs=max(maxs,a[j]);
			}
			cout<<" "<<maxs;
		}
		cout<<endl;
	}
}

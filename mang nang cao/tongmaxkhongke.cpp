#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long a[n],b[n];
		for(i=0;i<n;i++) cin>>a[i];
		b[0]=a[0];
		b[1]=max(a[0],a[1]);
		for(i=2;i<n;i++)	b[i]=max(b[i-2]+a[i],b[i-1]);
		cout<<b[n-1]<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
main()
{
	long t,i,n;
	cin>>t;
	while(t--)
	{
		long min=-999999;
		cin>>n;
		long a[n],b[n];
		for(i=0;i<n;i++) {
		cin>>a[i];
		b[i]=a[i];
		if(a[i]>min)	min=a[i];
		}
		sort(b,b+n);
		for(i=0;i<n;i++)
		{
			if(a[i]==min) cout<<"_ ";
			else{
				int vi_tri=upper_bound(b,b+n,a[i])-b;
				cout<<b[vi_tri]<<" ";
			}
		}
		cout<<endl;
	}
}

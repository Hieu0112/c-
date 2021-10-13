#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,i,j,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=1;
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)	if(a[j]>a[i]&&b[j]<b[i]+1) b[j]++;
		}
		sort(b,b+n);
		cout<<b[n-1]<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1]) j=i;
		}
		swap(a[j],a[j+1]);
		for(i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}

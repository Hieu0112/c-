#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++) cout<<a[i];
		cout<<" ";
		while(true)
		{int dem=0;
			for(i=n-1;i>=0;i--)
			{
				if(a[i]==1) a[i]=0;
				else if(a[i]==0){ a[i]=1;
				break; 
				}
			}
			for(i=0;i<n;i++) {
			cout<<a[i];if(a[i]) dem++;}
			if(dem==n) break;
			cout<<" ";
		}
		cout<<endl;
	}
}

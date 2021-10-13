#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,n,i,k,j,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[k];
		for(i=0;i<k;i++)
		a[i]=i+1;
		if(k<=n)
		for(i=0;i<k;i++) cout<<a[i];
		cout<<" ";
		if(k<n)
		{
		while(true)
		{
			int dem=0;
			for(i=k-1;i>=0;i--)
			{
				if(a[i]<n) {
					a[i]++;
					break;
				}
				else if(a[i]==n)
				{
					for(j=i-1;j>=0;j--)
					{
					if(a[j]<a[j+1]-1)
						{
							a[j]++;
					x=j;
					break;	
						}
					}
					for(int l=x+1;l<k;l++)
					{
						a[l]=a[l-1]+1;
					}	
					break;
				}
			}
			for(i=0;i<k;i++) {
				cout<<a[i];
			}
			if(a[k-1]==n) dem++;
			for(i=0;i<k-1;i++)
			{
				if(a[i]==a[i+1]-1) dem++;
			}
			if(dem==k) break;
			cout<<" ";
		}
		}
		cout<<endl;
	}
}

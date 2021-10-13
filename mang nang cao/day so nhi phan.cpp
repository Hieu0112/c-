#include<bits/stdc++.h>
using namespace std;
void nhap(int *a,int n)
{
	for(int i=0;i<n;i++ )cin>>a[i];
}
main()
{
	int t,n,x,y,maxs,so;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],b[n];
		nhap(a,n);
		nhap(b,n);
		maxs=0;
		for(int i=0;i<n;i++)
		{x=0,y=0;
			for(int j=i;j<n;j++)
			{
				x+=a[j];
				y+=b[j];
		if(x==y) so=j-i+1;	
		}
		maxs=max(so,maxs);
		}
		cout<<maxs<<endl;
	}
}

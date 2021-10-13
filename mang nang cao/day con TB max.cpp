#include<bits/stdc++.h>
using namespace std;
void nhap(long *a,long n)
{
	for(long i=0;i<n;i++) cin>>a[i];
}
void xuat(long a[],long n,long m)
{
	long x,y;
	long maxs=-99999,s;
	for(long i=0;i<=n-m;i++)
	{	s=a[i];
		for(long j=i+1;j<i+m;j++)
		{s+=a[j];}
	if(s>maxs){
			maxs=s;
			x=i;
			y=i+m-1;
		}
	}
	for(long i=x;i<=y;i++) cout<<a[i]<<" ";
	cout<<endl;
}
main()
{
	long t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		long a[n];
		nhap(a,n);
		xuat(a,n,k);
	}
}

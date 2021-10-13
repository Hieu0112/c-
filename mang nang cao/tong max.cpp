#include<bits/stdc++.h>
using namespace std;
void nhap(int *a,int n)
{
	for(int i=0;i<n;i++) cin>>a[i];
}
long tong(int *a,int n,int *b,int m)
{
	int i,j;
	long sum1=0,sum2,sum=0;
	for(i=0;i<n;i++)
	{
		sum1+=a[i];
		sum2=0;
		for(j=i+1;j<m;j++)
		{
			sum2+=b[j];
		}
		if(sum1+sum2>sum) sum=sum1+sum2;
	}
	return sum;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n;
		int a[n];
		cin>>m;
		int b[m];
		nhap(a,n);
		nhap(b,m);
		long x=max(tong(a,n,b,m),tong(b,m,a,n));
		cout<<x<<endl;
	}
}

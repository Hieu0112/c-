#include<bits/stdc++.h>
using namespace std;
int i,n,a[100];
void nhap()
{
	cin>>n;
}
void sinh(int i)
{
	for(int j=0;j<2;j++)
	{
		a[i]=j;
		if(i==n-1) {
			for(int l=0;l<n;l++)
			cout<<a[l];
			cout<<" ";
		}
			else sinh(i+1);
		}
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		nhap();
		sinh(0);
		cout<<endl;
	}
}

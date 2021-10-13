#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100];	
void nhap()
{
	cin>>n>>k;
}
void nhiphan(int i)
{
	a[0]=0;
	for(int j=a[i-1]+1;j<=n-k+i;j++)
	{
	a[i]=j;
	if(i==k) {
	for(int l=1;l<=k;l++)
	cout<<a[l];
	cout<<" ";
	}
	else nhiphan(i+1);}
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		nhap();
		nhiphan(1);
		cout<<endl;
	}
}

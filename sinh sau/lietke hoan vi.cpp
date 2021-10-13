#include<bits/stdc++.h>
using namespace std;
int a[100],n;
bool check[100];
void nhap()
{
	cin>>n;
}
void hoanvi(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(check[j]==false) {
			a[i]=j;
			check[j]=true;
			if(i==n-1) {
				for(int k=0;k<n;k++) cout<<a[k];
			cout<<" ";}
		else hoanvi(i+1);
		check[j]=false;
	}
}
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		nhap();
		hoanvi(0);
		cout<<endl;
	}
}

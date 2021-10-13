#include<bits/stdc++.h>
using namespace std;
void nhap(int *a,int n)
{
	for(int i=0;i<n;i++) cin>>a[i];
}
void mang_0(int a[],int n)
{
	int buoc=0,dem=0,chia=0;
	for(int i=0;i<n;i++)
	{chia=0;
		int x=a[i];
		while(x!=0)
		{
			if(x%2==0) {
			x/=2;chia++;}
			else {
			x-=1;
			dem++;}
		}
		buoc=max(buoc,chia);
	}
	cout<<buoc+dem<<endl;
}
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		nhap(a,n);
		mang_0(a,n);
	}
}

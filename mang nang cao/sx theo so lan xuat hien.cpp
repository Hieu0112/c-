#include<bits/stdc++.h>
using namespace std;
int sa[100009];
void nhap(int a[],int &n)
{
	cin>>n;
	for(int i=0;i<n;i++) {
			cin>>a[i];
			sa[a[i]]++;
		}
}
bool cmp1(int x,int y)
{
	if(sa[x]>sa[y]) return sa[x]>sa[y];
	else if(sa[x]==sa[y]) return x<y;
	return 0;
}
main()
{
	int t,n;
	int a[10000];
	cin>>t;
	while(t--)
	{
		nhap(a,n);
		sort(a,a+n,cmp1);
		for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
		sa[a[i]]=0;
	}
	cout<<endl;
	}
}

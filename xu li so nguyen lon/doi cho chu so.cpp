#include<bits/stdc++.h>
using namespace std;
void kt(string a)
{
	int n=a.length(),i,t=0,z=0,j;
	for(i=n-1;i>0;i--)
	{
		if(a[i]<a[i-1])
		{
		for(j=i;j<n;j++)
		{
			if(a[i-1]>a[j]&&a[j]>z) {
				z=a[j],t=j;
			}
		}
		if(t!=0) {
			swap(a[i-1],a[t]);break;}
	}
	}
	if(t==0) cout<<"-1";
	else{
	if(a[0]=='0') cout<<"-1";	
	else cout<<a;
	}
}
main()
{
	string a;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>a;
		kt(a);
		cout<<endl;
	}
}

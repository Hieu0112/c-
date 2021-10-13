#include<bits/stdc++.h>
long long s,k=1e9+7;
//int mu(int a,long x)
//{
//	long long ss=1;
//	for(int i=1;i<=x;i++)	ss=(ss*a)%k;
//	return ss;
//}
long long mumoi(int a,int x)
{
	if(x==0) return 1;
	else{
		long long t=mumoi(a,x/2)%k;
		if(x%2==0) return (t*t)%k;
		else	return (a*((t*t)%k))%k;
	}
}
//long long mumoi(int a,int x)
//{
//	if(x==0) return 1;
//	if(x==1) return a;
//	else{
//		long long kg=(a*a)%k;
//		if(x%2==0) return mumoi(kg,x/2)%k;
//		else return (a*mumoi(kg,x/2)%k)%k;
//	}
//}
using namespace std;
main()
{
	int t,n;
	long x;
	cin>>t;
	while(t--)
	{
		s=0;
		cin>>n>>x;
		long a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		{
		s=(s+a[i]*mumoi(x,n-1-i))%k;	
		}
		cout<<s<<endl;
	}
}

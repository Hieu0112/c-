#include<bits/stdc++.h>
using namespace std;
long long p=1e9+7;
void nhap(long long *a,int n)
{
	for(int i=0;i<n;i++) cin>>a[i];
}
long mu(long m,long n)
{
//	if(n==0) return 1;
//	else{
//		long x=mu(m,n/2);
//		if(n%2==0) return ((x%p)*(x%p))%p;
//		else return (m*((x%p)*(x%p))%p)%p;
//	}
long s=1;
for(int i=1;i<=n;i++)
{
	s=s*m;
	s%=p;
}
return s;
}
main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
	cin>>n;
	long long a[n];
	nhap(a,n);
	long long s=1;
	long long x=a[0];
	for(int i=0;i<n;i++)
	{
		x=__gcd(x,a[i]);
		s*=a[i];
		s%=p;
	}
	cout<< mu(s,x) <<endl;
}
}

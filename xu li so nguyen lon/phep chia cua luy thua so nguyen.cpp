#include<bits/stdc++.h>
using namespace std;
long long du(long long a,long long b,long long c)
{
	if(b==0) return 1;
	else if(b==1) return a;
	else{
		long long k=(a*a)%c;
		if(b%2==0) return du(k,b/2,c)%c;
		else return (a*du(k,b/2,c)%c)%c;
	}
}
main()
{
	int t,i,n;
	long long s,b,c;
	cin>>t;
	while(t--)
	{
		s=0;
		string a;
		cin>>a;
		n=a.length();
		cin>>b>>c;
		for(i=0;i<n;i++)
		s=(10*s+a[i]-'0')%c;
		cout<<du(s,b,c)<<endl;
	}
}

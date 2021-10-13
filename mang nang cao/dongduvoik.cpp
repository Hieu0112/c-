#include<bits/stdc++.h>
using namespace std;
main()
{
	long t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long a[n],max=999999,dem=0,GCD;
		for(i=0;i<n;i++) {
		cin>>a[i];
		if(a[i]<max) max=a[i];}
		for(i=0;i<n;i++) a[i]-=max;
		GCD=a[0];
		for(i=1;i<n;i++) GCD=__gcd(GCD,a[i]);
		for(i=1;i<=sqrt(GCD);i++)
		{
			if(GCD%i==0) {
			if(i!=GCD/i)	dem+=2;
			else dem++;
		}
		}
		cout<<dem<<endl;
	}
}



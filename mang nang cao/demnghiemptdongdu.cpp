#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long b,p,dem=0,i,x;
		cin>>b>>p;
		for(i=1;i<p;i++)
		{
			if((i*i)%p==1)
			{
				x=i+p*(b/p);
				if(x>b) x-=p;
				dem+=((x-i)/p+1);
			}
		}
	cout<<dem<<endl; 
	}
}

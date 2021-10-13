#include<iostream>
using namespace std;
long long chia(long long a,long long b,long long c)
{
	if(b==0) return 0;
	long long so=chia(a,b/2,c);
	if(b%2==0) return (2*(so%c))%c;
	else return (a%c+2*(so%c))%c;
}
main()
{
	int t;
	long long a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		cout<<chia(a,b,c)<<endl;
	}
}


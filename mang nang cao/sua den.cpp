#include<bits/stdc++.h>
using namespace std;
main()
{
	int N,K,B;
	cin>>N>>K>>B;
	int x,sum=0;
	int art[100009];
	for(int i=1;i<N+2;i++) art[i]=1;
	for(int i=0;i<B;i++) {
		cin>>x;
		art[x]=0;
	}
	for(int i=1;i<=K;i++) sum+=art[i];
	int den=K-sum;
	for(int i=K+1;i<=N;i++)
	{
		sum+=art[i];
		sum-=art[i-K];
		den=min(den,K-sum);
	}
	if(den<0) cout<<"0";
	else cout<<den;
}

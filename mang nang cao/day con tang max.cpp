#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],art[n],brt[n+1];
		int i,mid,L=0;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++)
		{
		int dau=1;
		int cuoi=L;
		while(dau<=cuoi)
		{
			mid=(dau+cuoi)/2;
			if(a[art[mid]]<a[i]) dau=mid+1;
			else cuoi=mid-1;
		}
		int L_moi= dau;
		brt[i]=art[L_moi-1];
		art[L_moi]=i;
		if(L_moi>L) L=L_moi;
		}
//		int s[L];
//		int k=art[L];
//		for(i=L-1;i>=0;i--) {
//		s[i]=a[k];
//		k=brt[k];}
//		for(i=0;i<L;i++) cout<<s[i]<<" "; in ra day con max;

		cout<<L<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu;
	long long mau;
};
long long ucnn(long long a,long long b)
{
	while(a*b!=0)
	{
		if(a>b) a%=b;
		else b=b%a;
	}
	return a+b;
}
void nhap(struct PhanSo &p)
{
	cin>>p.tu;
	cin>>p.mau;
}
long long rutgon(struct PhanSo p)
{
	long long k=ucnn(p.tu,p.mau);
	return k;
}
void in(struct PhanSo p)
{
	cout<<p.tu/rutgon(p)<<"/"<<p.mau/rutgon(p);
}
main()
{
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}

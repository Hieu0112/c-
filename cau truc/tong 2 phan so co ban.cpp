#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long tu;
	long mau;
};
void nhap(PhanSo &a)
{
	cin>>a.tu;
	cin>>a.mau;
}
long ucnn(long m,long n)
{
	while(m*n!=0)
	{
		if(m>n) m%=n;
		else n%=m;
	}
	return n+m;
}
PhanSo tong(PhanSo a,PhanSo b)
{
	PhanSo PS;
	long long x=a.tu*b.mau+a.mau*b.tu;
	long long y=a.mau*b.mau;
	long long k=ucnn(x,y);
	PS.tu=x/k;
	PS.mau=y/k;
	return PS;
}
void in(PhanSo PS)
{
	cout<<PS.tu<<"/"<<PS.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

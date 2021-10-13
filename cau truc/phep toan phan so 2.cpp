#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long tu;
	long mau;
};
void process(PhanSo A,PhanSo B)
{
	PhanSo C,D;
	C.tu=A.tu*B.mau+B.tu*A.mau;
	C.tu*=C.tu;
	C.mau=A.mau*B.mau;
	C.mau*=C.mau;
	D.tu=A.tu*B.tu*C.tu;
	D.mau=A.mau*B.mau*C.mau;
	long GCD_c=__gcd(C.tu,C.mau);
	long GCD_d=__gcd(D.tu,D.mau);
	cout<<C.tu/GCD_c<<"/"<<C.mau/GCD_c<<" ";
	cout<<D.tu/GCD_d<<"/"<<D.mau/GCD_d<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}

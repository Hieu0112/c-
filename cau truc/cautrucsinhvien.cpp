#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten,lop;
	int ngay,thang,nam;
	double GPA;
};
void nhap(SinhVien &a)
{
	getline(cin,a.ten);
	getline(cin,a.lop);
	cin>>a.ngay;
	scanf("/");
	cin>>a.thang;
	scanf("/");
	cin>>a.nam;
	cin>>a.GPA;
}
void in(SinhVien a)
{
	cout<<"B20DCCN001"<<" "<<a.ten<<" "<<a.lop<<" ";
	if(a.ngay/10==0) cout<<"0";
	cout<<a.ngay<<"/";
	if(a.thang/10==0) cout<<"0";
	cout<<a.thang<<"/"<<a.nam<<" ";
	printf("%.2lf",a.GPA);
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

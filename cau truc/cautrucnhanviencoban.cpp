#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string hoten,gioitinh,ngaysinh,diachi;
	string maso;
	string ngayky;
};
void nhap(NhanVien &a)
{
	getline(cin,a.hoten);
	getline(cin,a.gioitinh);
	getline(cin,a.ngaysinh);
	getline(cin,a.diachi);
	getline(cin,a.maso);
	getline(cin,a.ngayky);
}
void in(NhanVien &a)
{
	cout<<"00001"<<" ";
	cout<<a.hoten<<" "<<a.gioitinh<<" "<<a.ngaysinh<<" ";
	cout<<a.diachi<<" "<<a.maso<<" "<<a.ngayky;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string hoten,gioitinh,ngaysinh,diachi,maso,ngayky;
};
void nhap(NhanVien &a)
{
	cin.ignore();
	getline(cin,a.hoten);
	getline(cin,a.gioitinh);
	getline(cin,a.ngaysinh);
	getline(cin,a.diachi);
	getline(cin,a.maso);
	cin>>a.ngayky;
}
void inds(NhanVien a[],int N)
{
	for(int i = 0; i < N; i++)
	{int t=i+1;
	cout<<"000"<<t/10<<t%10<<" ";
	cout<<a[i].hoten<<" "<<a[i].gioitinh<<" "<<a[i].ngaysinh<<" ";
	cout<<a[i].diachi<<" "<<a[i].maso<<" "<<a[i].ngayky<<endl;}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}

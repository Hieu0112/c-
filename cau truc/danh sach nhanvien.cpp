#include<bits/stdc++.h>
using namespace std;
int so[50];
struct NhanVien{
	string hoten,gioitinh;
	int thang,ngay,nam;
	string diachi,maso,ngayky;
};
void nhap(NhanVien &a1)
{
	cin.ignore();
	getline(cin,a1.hoten);
	getline(cin,a1.gioitinh);
	cin>>a1.thang;
	scanf("/");
	cin>>a1.ngay;
	scanf("/");
	cin>>a1.nam;
	cin.ignore();
	getline(cin,a1.diachi);
	getline(cin,a1.maso);
	cin>>a1.ngayky;
}
void sapxep(NhanVien a[],int N)
{
	for(int i=0;i<N;i++) so[i]=i+1;
	for(int i=0;i<N-1;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(a[i].nam>a[j].nam){
			swap(a[i],a[j]);
			swap(so[i],so[j]);}
			if(a[i].nam==a[j].nam&&a[i].thang>a[j].thang){
			swap(a[i],a[j]);
			swap(so[i],so[j]);}
			if(a[i].nam==a[j].nam&&a[i].thang==a[j].thang&&a[i].ngay>a[j].ngay)
			{
			swap(a[i],a[j]);
			swap(so[i],so[j]);}
		}
	}
}
void inds(NhanVien a[],int N)
{
	for(int i = 0; i < N; i++)
	{
	cout<<"000";
	if(so[i]<10) cout<<"0";	
	cout<<so[i]<<" ";	
	cout<<a[i].hoten<<" "<<a[i].gioitinh<<" ";
	if(a[i].thang<10) cout<<"0";
	cout<<a[i].thang<<"/";
	if(a[i].ngay<10)cout<<"0";
	cout<<a[i].ngay<<"/"<<a[i].nam<<" ";
	cout<<a[i].diachi<<" "<<a[i].maso<<" "<<a[i].ngayky<<endl;}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}

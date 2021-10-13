#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string HoTen,Lop;
	int date,month,year;
	float GPA;
};
void nhap_1(SinhVien &a)
{
	cin.ignore();
	getline(cin,a.HoTen);
	getline(cin,a.Lop);
	cin>>a.date;
	scanf("/");
	cin>>a.month;
	scanf("/");
	cin>>a.year;
	cin>>a.GPA;
}
void nhap(SinhVien ds[],int n)
{
	for(int i=0;i<n;i++) nhap_1(ds[i]);
}
void in_1(SinhVien a,int x)
{
	cout<<"B20DCCN";
	if(x<=9) cout<<"0";
	cout<<"0"<<x<<" ";
	cout<<a.HoTen<<" "<<a.Lop<<" ";
	if(a.date<10) cout<<"0";
	cout<<a.date<<"/";
	if(a.month<10) cout<<"0";
	cout<<a.month<<"/"<<a.year<<" ";
	cout<<fixed<<setprecision(2)<<a.GPA<<endl;
}
void in(SinhVien ds[],int n)
{
	for(int i=0;i<n;i++) in_1(ds[i],i+1);
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}

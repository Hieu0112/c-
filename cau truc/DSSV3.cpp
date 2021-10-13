#include<bits/stdc++.h>
using namespace std;
int so[100];
struct SinhVien{
	string HoTen,Lop;
	int date,month,year;
	double GPA;
};
void nhap_1(SinhVien &a)
{
	scanf("\n");
	getline(cin,a.HoTen);
	getline(cin,a.Lop);
	cin>>a.date;
	scanf("/");
	cin>>a.month;
	scanf("/");
	cin>>a.year;
	cin>>a.GPA;
}
void Chuanhoaten(string a)
{
	string x;
	stringstream s(a);
	while(s>>x)
	{
		x[0]=toupper(x[0]);
		for(int i=1;i<x.length();i++) x[i]=tolower(x[i]);
		cout<<x<<" ";
	}
}
void Chuanhoalop(string x)
{
	for(int i=0;i<x.length();i++) x[i]=toupper(x[i]);
	cout<<x<<" ";
}
void nhap(SinhVien ds[],int n)
{
	for(int i=0;i<n;i++) {
	nhap_1(ds[i]);so[i]=i+1;}
}
void sapxep(SinhVien ds1[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ds1[i].GPA<ds1[j].GPA) {
			swap(ds1[i],ds1[j]);
			swap(so[i],so[j]);}
		}
	}
}
void in_1(SinhVien a,int x)
{
	cout<<"B20DCCN";
	if(x<=9) cout<<"0";
	cout<<"0"<<x<<" ";
	Chuanhoaten(a.HoTen);
	Chuanhoalop(a.Lop);
	if(a.date<10) cout<<"0";
	cout<<a.date<<"/";
	if(a.month<10) cout<<"0";
	cout<<a.month<<"/"<<a.year<<" ";
	cout<<fixed<<setprecision(2)<<a.GPA<<endl;
}
void in(SinhVien ds[],int n)
{
	for(int i=0;i<n;i++) in_1(ds[i],so[i]);
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}


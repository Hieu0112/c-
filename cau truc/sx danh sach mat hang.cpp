#include<bits/stdc++.h>
using namespace std;
int so[100];
struct Vatpham{
	string ten,hang;
	double mua,ban;
};
void nhap(Vatpham &a1)
{
	cin.ignore();
	getline(cin,a1.ten);
	getline(cin,a1.hang);
	cin>>a1.mua;
	cin>>a1.ban;
}
void sapxep(Vatpham *a,int N)
{
	for(int i=0;i<N;i++) so[i]=i+1;
	for(int i=0;i<N-1;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(a[i].ban-a[i].mua<a[j].ban-a[j].mua){
			swap(a[i],a[j]);
			swap(so[i],so[j]);}
	}
	}
}
void inds(Vatpham *a,int N)
{
	for(int i = 0; i < N; i++)
	{
	cout<<so[i]<<" ";	
	cout<<a[i].ten<<" "<<a[i].hang<<" ";
	printf("%.2lf",a[i].ban-a[i].mua);
	cout<<endl;}
}
int main(){
    struct Vatpham ds[100];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}

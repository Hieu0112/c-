#include<bits/stdc++.h>
using namespace std;
struct Giatre{
	string hoten;
	int ngay,thang,nam;
};
void nhap(Giatre &ad)
{
	cin>>ad.hoten;
	cin>>ad.ngay;
	scanf("/");
	cin>>ad.thang;
	scanf("/");
	cin>>ad.nam;
}
int main(){
    struct Giatre a[100];
    int N,i,j;
    cin >> N;
    cin.ignore();
    for(i = 0; i < N; i++) nhap(a[i]);
    for(i = 0; i < N; i++)
    {
    	for(j=i+1;j<N;j++)
    	{
    		if(a[i].nam>a[j].nam)swap(a[i],a[j]);
    		if(a[i].nam==a[j].nam&&a[i].thang>a[j].thang)swap(a[i],a[j]);
    		if(a[i].nam==a[j].nam&&a[i].thang==a[j].thang&&a[i].ngay>a[j].ngay ) swap(a[i],a[j]);
		}
	}
	cout<<a[N-1].hoten<<endl;
	cout<<a[0].hoten;
    return 0;
}

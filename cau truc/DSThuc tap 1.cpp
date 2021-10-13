#include<bits/stdc++.h>
using namespace std;
struct DSTT{
	string Ma,HT,Lop,email,DN;
};
void nhap(DSTT &a)
{
	cin.ignore();
	getline(cin,a.Ma);
	getline(cin,a.HT);
	getline(cin,a.Lop);
	getline(cin,a.email);
	cin>>a.DN;
}
main()
{
	struct DSTT sv[100];
	int so[100];
	int n,x,i,j;
	string Ten[100];
	cin>>n;
		for(i=0;i<n;i++)
		{
			nhap(sv[i]);
			so[i]=i+1;
		}
	cin>>x;
	for(i=0;i<x;i++) cin>>Ten[i];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(sv[i].HT.compare(sv[j].HT)>0) {
				swap(sv[i],sv[j]);
				swap(so[i],so[j]);
			}
		}
	}
	for(int k=0;k<x;k++)
	{
	for(i=0;i<n;i++)
	{
		if(Ten[k].compare(sv[i].DN)==0) {
			cout<<so[i]<<" "<<sv[i].Ma<<" "<<sv[i].HT<<" "<<sv[i].Lop<<" "<<sv[i].email<<" "<<sv[i].DN<<endl;
		}
	}
	}
}

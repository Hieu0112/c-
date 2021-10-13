#include<bits/stdc++.h>
using namespace std;
struct DIEM{
	string msv,ten,malop;
	double A,B,C;
};
void nhap(DIEM &a)
{
	cin.ignore();
	getline(cin,a.msv);
	getline(cin,a.ten);
	getline(cin,a.malop);
	cin>>a.A>>a.B>>a.C;
}
main()
{
	struct DIEM hs[100];
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)	nhap(hs[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(hs[i].msv.compare(hs[j].msv)>0)	swap(hs[i],hs[j]);
		}
	}
	for(i=0;i<n;i++)
	{cout<<i+1<<" "<<hs[i].msv<<" "<<hs[i].ten<<" "<<hs[i].malop<<" ";
	printf("%.1lf %.1lf %.1lf\n",hs[i].A,hs[i].B,hs[i].C);}
}

#include<bits/stdc++.h>
using namespace std;
struct Diem{
	int x,y,z;
};
void nhap(Diem &a)
{
	cin>>a.x>>a.y>>a.z;
}
Diem tich(Diem a,Diem b)
{
	Diem n;
	n.x=a.y*b.z-a.z*b.y;
	n.y=a.z*b.x-a.x*b.z;
	n.z=a.x*b.y-a.y*b.x;
	return n;
}
Diem hieu(Diem a,Diem b)
{
	Diem n;
	n.x=b.x-a.x;
	n.y=b.y-a.y;
	n.z=b.z-a.z;
	return n;
}
int main()
{
	Diem XY[4],n,a,b;
	int t;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<4;i++) nhap(XY[i]);
		a=hieu(XY[0],XY[1]);
		b=hieu(XY[0],XY[2]);
	n=tich(a,b);
	int k=n.x*(XY[3].x-XY[0].x)+	n.y*(XY[3].y-XY[0].y)+  n.z*(XY[3].z-XY[0].z);
	if(k==0) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
	}
}

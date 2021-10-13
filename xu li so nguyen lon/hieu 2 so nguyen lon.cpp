#include<bits/stdc++.h>
using namespace std;
string dao(string a)
{
	string s;
	for(int i=a.length()-1;i>=0;i--)
	s.push_back(a[i]);
	return s;
}
void hieu(string a,string b)
{
	a=dao(a);
	b=dao(b);
	int n=a.length(),m=b.length();
	for(int i=0;i<n-m;i++) b+='0';
	int muon=0,t;
	string s;
	for(int i=0;i<n;i++)
	{
		t=(a[i]-'0')-(b[i]-'0')-muon;
		if(t<0) {
		t+=10;
		muon=1;}
		else muon=0;
		s+=(t+'0');
	}
	s=dao(s);
	cout<<s<<endl;
}
main()
{
	int t,n,m,i;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		n=a.length();
		m=b.length();
		if(n>m) hieu(a,b);
		else if(n<m) hieu(b,a);
		else{int x;
			for(long long i=0;i<n;i++){
				if(a[i]<b[i])
				{
					x=0;break;//th1 a<b
				}
				else if(a[i]>b[i]){
					x=1;break;//th2 b<a
				}
		}
		if(x==0) hieu(b,a);
		else hieu(a,b);
	}
	}
}

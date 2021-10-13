#include<bits/stdc++.h>
#include<vector>
using namespace std;
string dao(string a)
{
	string s;
	for(int i=a.length()-1;i>=0;i--)
	s.push_back(a[i]);
	return s;
}
void tong(string a,string b)
{
	a=dao(a);
	b=dao(b);
	string s;
	a+='0';
	int i,du=0,t,x=a.length(),y=b.length();
	for(i=0;i<x-y;i++) b+='0';
	for(i=0;i<x;i++)
	{
	t=a[i]-'0'+b[i]-'0'+du;
	du=t/10;
	t=t%10;
	t=t+'0';
	s.push_back(t);	
	}
	s=dao(s);
	if(s[0]=='0')	s.erase(0,1);
	cout<<s<<endl;
}
main()
{
	short t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		if(a.length()>=b.length())
		tong(a,b);
		else tong(b,a);
	}
}

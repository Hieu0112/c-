#include<bits/stdc++.h>
using namespace std;
string s;
int n;
void nhap()
{
	cin>>s;
	n=s.length();
}
int chiahet(int x)
{int i,j;
int dem=0;
	for(i=0;i<n;i++)
		{
			long long k=0;
			{
				for(j=i;j<n;j++)
				{
					k=k*10+(s[j]-'0');
					k%=x;
					if(k==0) dem++; 
				}
			}
		}
		return dem;
}
main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
	nhap();
	cout<<chiahet(8)-chiahet(24)<<endl;
	}
}

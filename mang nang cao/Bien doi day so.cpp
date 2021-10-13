#include<bits/stdc++.h>
using namespace std;
void nhap(int *a,int n)
{
	for(int i=0;i<n;i++) cin>>a[i];
}
void BDDS(int a[],int n)
{
	int count=0,left=0,right=n-1;
	while(left<=right)
	{
		if(a[left]==a[right])
		{
			left++;
			right--;
		}
		else if(a[left]<a[right])
		{
			left++;
			a[left]+=a[left-1];
			count++;
		}
		else{
			right--;
			a[right]+=a[right+1];
			count++;
		}	
	}
	cout<<count<<endl;
}
main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		nhap(a,n);
		BDDS(a,n);
	}
}

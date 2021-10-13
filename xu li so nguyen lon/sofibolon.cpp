#include<iostream>
#include<cmath>
using namespace std;
int main(){
long long art[1001],k=pow(10,9)+7,i;
int x,t;
art[0]=0;
art[1]=1;
cin>>t;
while(t--)
{
cin>>x;
for(i=2;i<=x;i++)
{art[i]=(art[i-1]%k+art[i-2]%k)%k;}
cout<<art[x]<<endl;
}}

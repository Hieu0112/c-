#include<bits/stdc++.h>
#include<math.h>
using namespace std;

struct Point
{
	double x,y;
};


void input(Point &a)
{
	cin>> a.x;
	cin>> a.y;
}
double distance1(Point d1, Point d2)
{
	double kc;
	kc=sqrt(double(d1.x-d2.x)*(d1.x-d2.x)+(d1.y-d2.y)*(d1.y-d2.y));
	return kc;
}

int main()
{
	struct Point A, B;
	int t;
	cin>>t;
	while(t--)
	{
	input(A);input(B);
	cout << fixed << setprecision(4) << distance1(A,B) << endl;
	cout<<endl;}
}

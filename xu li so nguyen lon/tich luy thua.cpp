#include<iostream>
main(){
	long t,a,b,c,so,i;
	std::cin>>t ;
	while(t--)
	{
		so=1;
		std::cin>>a>>b>>c;
		b=b%c;
		for(i=0;i<b;i++)
		so=(so*a)%c;
		std::cout<<so<<"\n";
	}
}

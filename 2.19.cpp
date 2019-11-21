#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sum,Avg,prod;
	cout<<"Input Three diffrent integers :";
	cin>>a>>b>>c;
	sum=a+b+c;
	Avg=sum/3;
	prod=a*b*c;
	cout<<"Sum is :"<<sum<<endl;
	cout<<"Average is :"<<Avg<<endl;
	cout<<"Product is :"<<prod<<endl;
	if(a<b & b<c)
	{
		cout<<a<<" Is Smaller :";
	}
	else if(b<a & a<c)
	{
		cout<<b<<" is smaller :";
	}
	else 
	cout<<c<<" Is smaller";

	return 0;
	
}

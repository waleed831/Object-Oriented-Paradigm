#include<iostream>
using namespace std;
int main()
{
	int c,d;
	cout<<"Enter First Number :";
	cin>>c;
	cout<<"Enter Second Number :";
	cin>>d;
	if(c>d)
	{
		cout<<c<<" is larger. ";
	}
	else if(d>c)
	{
		cout<<d<<" Is Larger. ";
	}
	else if (c=d)
	{
		cout<<"Both Numbers are Equal";
	}
	else 
	cout<<"Enter Valid Numbers";
	return 0;
}

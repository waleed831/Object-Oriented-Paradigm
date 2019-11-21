#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter Two Numbers :";
	cin>>a>>b;
	if(b%a==0)
	{
		cout<<a<<"  IS A Factor :"<<endl;
	}
	elseif(a%b==0)
	{
		cout<<b<<"  IS A Factor :";
	}
	else
	{
		cout<<"there is no factors";
	}
	return 0;

	
}

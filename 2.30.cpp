#include<iostream>
using namespace std;
int main()
{
	float BMI,WIK,Him,Hiim;
	cout<<"Enter Your weight in Kilogram :";
	cin>>WIK;
	cout<<"Enter Your Height in Meters :";
	cin>>Him;
	Hiim=Him*Him;
	BMI=WIK/Hiim;
	cout<<BMI;
	if(BMI<18.5)
	{
		cout<<" UnderWeight";
	}
	else if(18.5<BMI<24.9 )
	{
		cout<<"Normal";
	}
	else if(25<BMI<29.9)
	{
		cout<<"OverWeight";
	}
	else if(BMI>30)
	{
		cout<<"Obese";
	}
	
	return 0;
}

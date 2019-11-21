#include<iostream>
using namespace std;
int main()
{
	int age;
	float MHRC,MHR1,MHR7,MHR12;
	cout<<"Please Enter Your Age :";
	cin>>age;
	MHRC=220-age;
	MHR1=208-(0.7*age);
	MHR7=207-(0.7*age);
	MHR12=211-(0.64*age);
	cout<<"The Value of MHR by commonly used formula is :"<<MHRC<<endl;
	cout<<"The Value of MHR by Tannaka 2001 formula  is :"<<MHR1<<endl;
	cout<<"The Value of MHR by Gellish 2007 formula is :"<<MHR7<<endl;
	cout<<"The Value of MHR by Nes et al 2012 formula is :"<<MHR12<<endl;
	return 0;


}

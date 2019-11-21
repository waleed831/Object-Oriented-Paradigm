#include<iostream>
using namespace std;
int main()
{
	int Array[5],max,min;
	cout<<"Enter Five values :";
{
		for(int i=0;i<5;i++)
	{
		cin>>Array[i];
	}
	max=Array[0];
	for(int u=0;u<5;u++)
	{
		if(max<Array[u])
		{
			max=Array[u];
		}
	}
	cout<<"The Largest Number is :"<<max<<endl;
}
	
	
	min=Array[0];
	for(int u=0;u<5;u++)
	{
		if(min>Array[u])
		{
			min=Array[u];
		}
	}
	cout<<"The Minimum Number is :"<<min;

	
	
}

#include<iostream>
using namespace std;
 
int main()
{
    int number1,number2, remainder,remainder1,remainder2,sum;
 
    cout << "Enter two numbers : ";
    cin >> number1;
    cin>>number2;
    remainder1 = number1 % 2;
    remainder2 = number2 % 2;
	{
	if (remainder1 == 0)
        cout << number1 << " is an even integer " << endl;
    else
        cout << number1 << " is an odd integer " << endl;
}
 
    {
		    if (remainder2 == 0)
        cout << number2 << " is an even integer " << endl;
    else
        cout << number2 << " is an odd integer " << endl;
}
sum=number1+number2;
if (remainder == 0)
        cout << sum << "  Their sum is an even integer " << endl;
    else
        cout << sum << "  Their sum is an odd integer " << endl;
 




 
 
    return 0;
}

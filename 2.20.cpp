#include<iostream>
using namespace std;
int main()
{ 
float rad,dia,cur,ar,p=3.14159;
cout<<"Enter the Radius of circle :";
cin>>rad;
dia=rad*rad;
cur=2*rad*p;
ar=dia*p;
cout<<"Area of circle is:"<<ar<<endl;
cout<<"Circumference of circle is:"<<cur<<endl;;
cout<<"Diameter of circle is:"<<dia<<endl;
return 0;
}

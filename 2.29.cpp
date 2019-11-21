#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,Saa,Sbb,Scc,Sdd,va,vb,vc,vd;
	cout<<"Enter four values :";
	cin>>a>>b>>c>>d;
	Saa=6*a*a;
	Sbb=6*b*b;
	Scc=6*c*c;
	Sdd=6*d*d;
	va=a*a*a;
	vb=b*b*b;
	vc=c*c*c;
	vd=d*d*d;
	cout<<"Face Length \t \t"<<"Surface area  \t \t"<<"Volume"<<endl;
	cout<<"of cube(cm) \t \t"<<"of cube(cm^2) \t \t"<<"of cube(cm^3)"<<endl;
	cout<<a<<"\t \t \t"<<Saa<<" \t \t \t"<<va<<endl;
	cout<<b<<"\t \t \t"<<Sbb<<" \t \t \t"<<vb<<endl;
	cout<<c<<"\t \t \t"<<Scc<<" \t \t \t"<<vc<<endl;
	cout<<d<<"\t \t \t"<<Sdd<<" \t \t \t"<<vd<<endl;
	return 0;
}

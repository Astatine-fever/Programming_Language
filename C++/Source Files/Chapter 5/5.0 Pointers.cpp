// Pointers and Double Pointers 

#include<iostream>
using namespace std;
main()
{
	int x,*y,**z; //*y is a pointer variable - which can access the value inside an address
	cout<<"Enter the Value of X \n";
	cin>>x;
	y=&x; //&x denotes the address of the x and not the value assigned to it 
	z=&y;
	cout<<"The Value of the X= "<<x<<"\n";
	cout<<"Address of the X="<<&x<<"\n";
	cout<<"The Value of Y ="<<y<<"\n";
	cout<<"The Value of Y ="<<*y<<"\n";
	cout<<"Address of the Y="<<&y<<"\n";
	cout<<"The Value of Z ="<<**z<<"\n";
	cout<<"Address of the Z="<<&z<<"\n";
}



// Class Members within the class and outside the class


#include <iostream>
using namespace std;
class nucleon   // Class 1 
{
	public:
	int a,b,c;
	int memfun2(); // method 4 here is only declared inside the class not defined ..
	int total(int,int);  // method 3 here is only declared inside the class not defined .. .
	int memfun1()  // Method 1 Within the class 
	{
	cout<<"Method 1 - Member within the class"<<endl;
	cout<<"Enter the value of A and B"<<endl;
	cin>>a>>b;
	nucleon n1;
	n1.add(a,b);
	}
	int add(int x, int y) // Method 2 Within the class with 2 Parameters
	{
	 cout<<"Method 2 - Member within the class"<<endl;
	 int z;
	 z=x+y;	
	 cout<<"The Value of Z = "<<z<<endl;
	}	
};
int nucleon::total( int m, int n) // Method 3 is defined outside the class using "::" scope resolution operator 
{
	cout<<"Method 4 - Member outside the class"<<endl;
	int l = m+n;
	return(l);
}
int nucleon::memfun2() // Method 4 is defined outside the class using "::" scope resolution operator 
{
	cout<<"Method 3 - Member outside the class"<<endl;
	int i,j,k;
	cout<<"Enter the Values for I and J";
	cin>>i>>j;
    nucleon n2;
	k=n2.nucleon::total(i,j);
	cout<<"K="<<k;
}
main() // main method .. 
{
nucleon n3;
n3.memfun1();
n3.memfun2();	
}

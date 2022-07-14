// Constructor Overloading in C++ 
#include<iostream>
using namespace std;
class hello
{
	public:
		hello()
		{
			cout<<"constructor in c++ \n";
		}
		
		hello(int x,int y)
		{
			int z= x+y;
			cout<<"Z="<<z;
		}
		
};
int main()
{
	int a,b;
	cout<<"Enter a value and B Value \n";
	cin>>a>>b;
	hello(); // constructor 1 
	hello(a,b); // constructor 2 
}

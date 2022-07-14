// Constructor in C++ 
#include<iostream>
using namespace std;
class sample
{
	public:
		sample()
		{
			cout<<"constructor in c++";
		}
		~sample()
		{
			cout<<"Destructor created ...constructor is destroyed after execution ";
		}
};
int main()
{
	
	sample(); // constructors can be accessed without objects 
}

// Multiple Inheritence in C++ 
#include<iostream>
using namespace std;
class mom // parent class1
{
public:	
void calling() // this method is in parent class1 
{
cout<<"This method is called from parent1 \n";
}
};
class dad // parent class2 
{
public:
void attending() // this method is in parent class2 
{
cout<<"This method is called from parent2 \n";
}
};
class kid : public mom ,public dad // kid inherits from both parent class
{
public:
void speaking() // this method is native to kids class 
{
cout<<"This method is from child \n";
}
};

int main()
{
	kid k; // object creation for kid 
	k.calling(); // calling parent class1 method 
	k.attending(); // calling parent class2 method 
	k.speaking(); // calling kid class method 
return 0;
}


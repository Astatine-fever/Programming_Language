// Nested Structures in C++ 
#include<iostream>
using namespace std;
struct luci // Structure 1 
{
	int a;
 	struct lucii // Structure 2 inside the structure 1 
	{
		char name[50];
	}lii; // structure variable 2 
} li; //  structure variable 1 

int main()
{
	cout<<" Enter the Name and Age \n";
	cin>>li.lii.name>>li.a;
	cout<<" Your name is "<<li.lii.name<<" \n Your age is "<<li.a<<"\n";
	return 0;
}

// Pointers inside a function 

#include<iostream>
using namespace std;
void add(int &i,int &j); // Function Declaration with Arguments 
int x,y,z; // Global Variables 
int main()
{
	int x,y,z;
	add(x,y);
	z=x+y;
	cout<<"Value inside X = "<<x<<"\n"<<"Value inside Y = "<<y<<"\n";
	cout<<"Z = "<<z;
	return 0;
}
void add(int &i,int &j)
{
	cout<<"Value inside X = "<<x<<"\n"<<"Address of X = "<<&i<<"\n";
	cout<<"Value inside Y = "<<y<<"\n"<<"Address of Y = "<<&j<<"\n";
	cout<<"Enter 2 Values \n";
	cin>>i>>j;
}

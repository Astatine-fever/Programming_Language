// Pointers inside a Structure 

#include<iostream>
using namespace std;
struct turing // Structure Creation
{
	int a,b,c;
}tu; // Structure Variable 

int main()
{	
struct turing *tr; // Pointer Variable for structure;
cout<<"Enter the Value of A and b";
cin>>tu.a;
cout<<"The Value Inside A is "<<tr->a<<"\n"; // for accessing a structure using a pointer "->" is used 
cin>>tu.b;
cout<<"The Value Inside B is "<<tr->b<<"\n";
tu.c=tu.a+tu.b;
cout<<"The Value Inside C is "<<tu.c<<"\n";
cout<<"Address of C is ="<<&tr->c;
cout<<"The Value inside C is "<<tr->c;
return 0;
}

// Unions in C++

#include<iostream>
using namespace std;
union test
{
	long int sample;
	char name[25];
	float te;
}t;
int main()
{
cout<<"Enter a value \n";
cin>>t.sample;
cout<<"Enter name \n";
cin>>t.name;
cout<<"Enter Weight \n";
cin>>t.te;
cout<<"A = "<<t.sample;	
cout<<"Name = "<<t.name<<"\n";
cout<<"Weight = "<<t.te<<"\n";
return 0;
}

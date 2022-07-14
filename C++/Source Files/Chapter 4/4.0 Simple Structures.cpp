// Simple Structure using C++

#include<iostream>
using namespace std;
struct test // Structure Declaration //
{
	int a,b,c;
	char name[20];
}sc;
int main()
{
	cout<<"enter your name \n";
	cin>>sc.name;
	cout<<"Enter Mark 1 and Mark2 \n";
	cin>>sc.a>>sc.b;
	sc.c = sc.a+ sc.b;
	cout<<"Your Name is "<<sc.name<<"\n";
	cout<<" Mark1: "<<sc.a<<"\n Mark2: "<<sc.b<<"\n Total: "<<sc.c<<" \n ";
}
	

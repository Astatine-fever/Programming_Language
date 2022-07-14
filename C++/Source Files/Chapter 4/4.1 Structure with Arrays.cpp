// Structure with Arrays in C++

#include<iostream>
using namespace std;
struct test // Structure Declaration //
{
	int mark[3]; // Structure with array datatype
	char name[20];
}sc;
int main()
{
	cout<<"enter your name \n";
	cin>>sc.name;
	cout<<"Enter Mark 1 and Mark2 \n";
	cin>>sc.mark[0]>>sc.mark[1];// array data inside the structure is accessed individually
	sc.mark[2] = sc.mark[0]+ sc.mark[1];
	cout<<"Your Name is"<<sc.name<<"\n";
	cout<<" Mark1:"<<sc.mark[0]<<" \n Mark2: "<<sc.mark[1]<<"\n Total: "<<sc.mark[2];
}


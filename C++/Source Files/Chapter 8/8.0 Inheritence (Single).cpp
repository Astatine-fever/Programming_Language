// Inheritence in C++

#include<iostream>
#include<conio.h>
using namespace std;
class test1   // Class 1 
{
	public:
	int add( int x,int y)
	{
		int z;
		z=x+y;
		cout<<"z="<<z;
	}
	
	int sub(int m,int n)
	{
		int o;
		o=m-n;
		cout<<"\n o="<<o;
	}
	
	
};
class test2 : public test1 // Class 2 Which inherits Class 1 
{
	public:
	int get()
	{
		int a,b;
		cout<<"Enter A and B Values \n";
		cin>>a>>b;
		//test2 t2;
		add(a,b);
		sub(a,b);
	}
};

	int main()
	{
	 test2 t1;
	 t1.get();
	}
	


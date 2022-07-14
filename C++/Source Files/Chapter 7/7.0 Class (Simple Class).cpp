// Simple Class with 2 methods 

#include<iostream>
using namespace std;
class newton
{
   public:
		int a,b,c;
		void add()
		{
		a=5;
		b=7;
		c=a+b;
		}
		void call()
		{
		cout<<"Hello \n";
		}
};
main()
{
	
	newton n;
	n.add();
	n.call();
	cout<<"C="<<n.c;
}

//  Class Exercise with 2 Methods 

#include<iostream>
using namespace std;
//int a,b,c;
class cells
{
   public:
		int a,b,c; // Global Declaration 
		int add(int a, int b)
		{
		c=a+b;
		return c;
		}
		void input()
		{
		int m;
		cout<<"Enter A and B Value \n";
		cin>>a>>b;
		m=add(a,b);
		cout<<"A = "<<a<<"B = "<<b;
		cout<<"M = "<<m;
		}
};
main()
{
	
	cells cs;
	cs.input();
}

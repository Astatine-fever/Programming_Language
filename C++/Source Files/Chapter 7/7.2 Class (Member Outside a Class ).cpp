// Method Definition outside a Class 
#include<iostream>
#include<conio.h>
using namespace std;
class texas  // Class 
{
	public:
	void rubix();
	void creation ()
	{
		cout<<"Test Program";
	}
	
};

void texas::rubix() // :: is scope resolution operator - in order to declare a function outside the class as same class , it is used  
//void rubix()
{
	int a,b,c;
	cout<<"enter the value of A and B \n";
	cin>>a>>b;
	c=a+b;
	cout<<"C= "<<c;	
};
main()
{
	texas t;
	t.creation();
	t.rubix();
}

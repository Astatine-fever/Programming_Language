// Access Specifiers in C++ 
#include<iostream>
using namespace std;
class welcome
{
public : int x,y,a;
private: int z;
public :void method1()
{
	cout<<"Public: \n";
	cout<<"This method is a public method and can be viewed and called inside and outside of class \n";
	cout<<"This method needs an object for it to be accessed outside the class. ";
	cout<<"This method can be directly accessed when called inside a class \n ";
}

protected :void method2()
{
	cout<<"\nProtected: \n";
	cout<<"This method is accessible only by members of the class or inherited class. ";
	cout<<"This method can be accessed directly inside the class its defined and inherited class. ";
	cout<<"But Cannot be accessed by members outside the class even with object\n";
	cout<<"Since this method is also inside the same class as private it can access private method \n";
	
	method3();
}

private :void method3()
{
	
	cout<<"\nPrivate: \n";
	cout<<"This method is only accessible inside the class. \n";
	cout<<"This method is not accessible even with objects outside the class or even in inherited class \n"; 
	
	z=25;
	cout<<"Z="<<z<<endl;
}
};
class guest: public welcome
{
	public: void method4()
{
	//guest g1;
	cout<<" \n This method inherits the class welcome hence it can call protected method";
	cout<<"\n";
	method2();
}
	
};

	int main()
	{
		guest g;
		//welcome w;
		cout<<"enter x and y value \n";
		cin>>g.x>>g.y; // Even though x,y,z are public it needs object to be accessed 
		g.a=g.x+g.y;
		cout<<"a ="<<g.a<<"\n";
		cout<<"\n";
		g.method1();
		g.method4();
		//w.method3();
	
		
	}

// Multilevel Inheritence in C++ 
#include<iostream>
using namespace std;
class Milk
{
	public: 
	void name()
	{
		cout<<"My Grandparents are Awesome \n";
	}
};
class Curd: public Milk
{
	public:
	void name1()
	{
		cout<<"My Parents are Good \n";
	}
};
class Butter : public Curd
{
	public:
	void name2()
	{
	 cout<<"Im Ok \n";
	}
};
int main()
{
Butter m;
m.name();
m.name1();
m.name2();
}

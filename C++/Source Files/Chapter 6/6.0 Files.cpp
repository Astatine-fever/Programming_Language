#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
	fstream a("c:/New/test.txt");
	a<<"hi sister";
	a.close();
}

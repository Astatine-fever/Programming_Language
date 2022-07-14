// Example of a Continue Statement 

#include<iostream>
using namespace std;
int main()
{
	int a=0;
	for(;a<100;a++)
	{
	 if(a%2==0)continue;
	 cout<<a;
	}
}

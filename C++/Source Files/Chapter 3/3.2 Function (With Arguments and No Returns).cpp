// Functions with Arguments and No Returns 

#include<iostream>
#include<conio.h>
using namespace std;
void add(int x,int y); // Function Declaration
int a,b,c; // Global Declaration 
int main()  // Main Method
{
 cout<<"Enter the A and B value";
 cin>>a>>b;
 add(a,b); // Function Calling
  return 0;
}
void add(int a,int b) // Function Definition 
{
 int z = a+b;
 cout<<"z="<<z;
} 



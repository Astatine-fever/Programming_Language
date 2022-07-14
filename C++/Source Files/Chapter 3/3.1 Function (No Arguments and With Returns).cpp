// Functions with No Arguments and With Returns 

#include<iostream>
#include<conio.h>
using namespace std;
int add(); // Function Declaration
int a,b,c; // Global Declaration 
int main()  // Main Method
{
 c=add(); // Function Calling
 cout<<"c="<<c;
 return 0;
}
int add() // Function Definition 
{
 cout<<"Enter the A and B value";
 cin>>a>>b;
 int z = a+b;
 return(z);
} 



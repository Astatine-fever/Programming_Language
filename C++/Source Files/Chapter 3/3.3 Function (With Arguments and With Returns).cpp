// Functions with Arguments and With Returns 

#include<iostream>
#include<conio.h>
using namespace std;
int add(int x, int y); // Function Declaration 
int main()  // Main Method
{
int a,b,c;
cout<<"Enter the A and B value";
cin>>a>>b;
c=add(a,b); // Function Calling
cout<<"c="<<c;
return 0;
}
int add(int x,int y) // Function Definition 
{
int z = x+y;
return(z);
} 



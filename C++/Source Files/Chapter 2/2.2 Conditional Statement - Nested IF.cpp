// A Sample Program for Nested if .. 

#include<iostream>
using namespace std;
int main()
{
int i; // Variable Declaration 
cout<<"Enter the Value of I \n"; 
cin>>i;
if(i>0)   // Outer If statement 
{
	if(i>10)  // Inner IF Statement 1  .. its executed only when the outer IF is satisifed 
	{
		if(i>20) // Inner IF Statement 2 .. its executed only when the outer IF and Inner IF Statement 1  is satisifed
		{
			cout<<i<<"is above 20";
			goto exa;  // Goto Statement is to exit the program .. it is not necessary to include it but output will display all results...
		}
		cout<<i<<"is between 10 to 20";
		goto exa; // Goto Statement is to exit the program .. it is not necessary to include it but output will display all results...
	}
	cout<<i<<" is between 0 to 10";
}
else  // Else Condition in case all the above statements is false 
{
	cout<<i<<"%d is below 0 and its a negative number";
}
exa:
return 0;
}

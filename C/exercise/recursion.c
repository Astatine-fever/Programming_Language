// Recursion in C 
#include<stdio.h>
#include<conio.h>
int i=0;// Global Variable
void vinith();// declare
void main()
{
//local variable
vinith();	// Function Calling 
}

void vinith() // Function definition
{
	i++;
for(;i<=10;)
{
	printf("Recursion Example \n");
	vinith      (); // function calling 
}
}

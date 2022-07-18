// Recursion in C 
#include<stdio.h>
#include<conio.h>
int i=0;// Global Variable
void recurve();
void main()
{
	//local variable
recurve();	// Function Calling 
}

void recurve() // Function
{
	i++;
for(;i<=10;)
{
	printf("Recursion Example \n");
	recurve();

}
}

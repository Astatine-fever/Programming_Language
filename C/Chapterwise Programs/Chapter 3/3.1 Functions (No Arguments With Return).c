// Fuction with No Arguments but with Return 
#include<stdio.h>
#include<conio.h>
int add(); // Function Declaration 
void main()
{
int c;
c=add(); // Function calling ... here the value returned from the add() will be placed in C 
printf("C = %d",c);
getch();
}
int add() // Function  Definition 
{
	int n=0,m=25,z=75;
	n=m+z;
	return n;
}

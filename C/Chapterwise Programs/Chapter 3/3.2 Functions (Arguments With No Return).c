// Functions ( Arguments with No Return)
#include<stdio.h>
#include<conio.h>
void add(int,int); // Function declaration with 2 Arguments 
void main()
{
	int a=7,b=25;
	add(a,b);
	getch();
}
void add(int x,int y)
{
	int m;
	m=x+y;
	printf("m= %d",m);
}

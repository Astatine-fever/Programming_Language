// Functions ( Arguments with No Return)
#include<stdio.h>
#include<conio.h>
int add(int,int); // Function declaration with 2 Arguments 
void main()
{
	int a=7,b=25,c;
	c=add(a,b);
	printf("C= %d",c);
	getch();
}
void add(int x,int y)
{
	int m;
	m=x+y;
	return(m);
}

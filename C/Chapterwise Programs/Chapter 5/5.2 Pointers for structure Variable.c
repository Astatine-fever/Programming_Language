#include<stdio.h>
#include<conio.h>
struct turing
{
	int a,b,c;
}tu,*RAM;

void main()
{	
RAM=&tu;
printf("Enter the Value of A and b \n");
scanf("%d",&RAM->a);
printf("The Value Inside A is %d \n",tu.a);
scanf("%d",&RAM->b);
printf("The Value Inside B is %d \n ",tu.b);
tu.c=tu.a+tu.b;
printf("The Value of C %d \n ",RAM->c);
}




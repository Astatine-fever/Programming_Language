#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
char choice;
//clrscr();
printf("\n Press '+' for Addition \n Press '-' for Subtraction\n Press '*' for Multiplication\n Press '/' for Division\n");
scanf("%c",&choice);
printf("Arithmatic operation to be performed is : %c \n",choice);
printf("Enter the A and B value \n");
scanf("%d %d",&a,&b);

switch(choice)
{
case'+':
	{
	printf("%d + %d = %d",a,b,a+b);
    break;
	}
   
case'-':
	{
	printf("%d - %d = %d",a,b,a-b);
    break;
	}
   
case'*':
	{
		printf("%d * %d = %d",a,b,a*b);
  	break;
	}
   
case'/':
	{
   printf("quotient  = %d \n",a/b);
   printf("reminder = %d",a%b);
   break;
}
default:
	{
	printf("Please select the valid option \n");
    break;
	}
   
   }
getch();
}

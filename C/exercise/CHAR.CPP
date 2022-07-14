#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
char c;
clrscr();
printf("Enter the A and B value \n");
scanf("%d%d",&a,&b);

printf("What should you want to do?\n");
printf("\n Press '+' for Addition \n Press '-' for Subtraction\n c,Press '*' for Multiplication\n Press '/' for Division\n");
scanf("%c",&c);

case'+':
   printf("%d + %d = %d",a,b,a+b);
   break;
case'-':
   printf("%d - %d = %d",a,b,a-b);
   break;
case'*':
   printf("%d * %d = %d",a,b,a*b);
   break;
case'/':
   printf("quotient  = %d",a/b);
   printf("reminder = %d",a%b);
   break;
defualt:
   printf("Please select the valid option \n");
   break;
   }
getch();

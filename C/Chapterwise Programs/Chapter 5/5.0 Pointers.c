#include <stdio.h>
#include <conio.h>
void main()
{
int a,b,c=0,*d=0; // *d is pointer variable 
printf("Enter the  value of A \n");
scanf("%d",&a);
printf("Enter the  value of B \n");
scanf("%d",&b);
c=a+b;
printf("the value of D before Assigning the address   %d\n",d);
d=&c;

printf("Enter value inside A is %d\n",a);
printf("The address of A is   %u \n",&a);

printf("Enter value inside B is %d\n",b);
printf("The address of B is   %u \n",&b);


printf("the value of C  %d\n",c);
printf("The address of C is   %u \n",&c);


printf("the value of D  %d\n",*d);
printf("The address inside D is   %u \n",d);

d=*d+15;
printf("the value of D  %d\n",d);

c=d;
printf("the value of C  %d\n",c);

getch();
}

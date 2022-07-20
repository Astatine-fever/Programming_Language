#include<stdio.h>
#include<conio.h>
void main()
{
int a,*b;
printf("Address of a is  %u \n",&a);
printf("Enter A value \n");
scanf("%d",&a);
printf("Value of A = %d \n Address of A = %u \n",a,&a);
b=&a;
printf("Address of B %u",b);
printf("\nValue of B = %d",*b);

}
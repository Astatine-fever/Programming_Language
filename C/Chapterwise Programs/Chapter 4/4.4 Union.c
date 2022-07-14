#include<stdio.h>
#include<conio.h>
union test
{
	long int a;
	char name[25];
}t;
void main()
{
printf("Enter a value \n");
scanf("%ld",&t.a);
printf("Enter name \n");
scanf("%s",&t.name);
printf("A = %ld",t.a);	
printf("Name = %s",t.name);
}

#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("Enter any number \n");
scanf("%d",&a);
if(a%2==0)
{
printf(" The Square value of a = %d",a*a);
}
else
{
printf(" The Cube value of a = %d",a*a*a);
}

getch();
}
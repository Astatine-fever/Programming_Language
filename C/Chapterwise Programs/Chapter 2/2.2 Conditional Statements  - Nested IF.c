// A Sample Program for Nested if .. 


#include<stdio.h>
#include<conio.h>
void main()
{
int i; // Variable Declaration 
printf("Enter the Value of I \n"); 
scanf("%d",&i);
if(i>0)   // Outer If statement 
{
	if(i>10)  // Inner IF Statement 1  .. its executed only when the outer IF is satisifed 
	{
		if(i>20) // Inner IF Statement 2 .. its executed only when the outer IF and Inner IF Statement 1  is satisifed
		{
			printf("%d is above 20",i);
			goto exa;  // Goto Statement is to exit the program .. it is not necessary to include it but output will display all results...
		}
		printf("%d is between 10 to 20",i);
		goto exa; // Goto Statement is to exit the program .. it is not necessary to include it but output will display all results...
	}
	printf("%d is between 0 to 10",i);
}
else  // Else Condition in case all the above statements is false 
{
	printf("%d is below 0 and its a negative number",i);
}
exa:
getch();
}

//  Ladder If or Else If 

#include<stdio.h>
#include<conio.h>
int i;
void main()
{
lessa: // goto label
printf("enter the Value of I between 0 to 30\n");
scanf("%d",&i);
if(i<0||i>30)
{
	goto lessa; //goto function ... this is to ensure only value between 0 to 30 is inserted 
}
if(i<10) // first If condition is checked and if conditions are met the statements are executed , if not it jumps to next if statements  
{
	printf("%d is between 0 and 10",i); 
}
else if(i>=10&&i<20) // this is second if condition it is checked if first condition is not sastisfied. 
{
	printf("%d is between 10 and 20",i);
}
else if(i>=20&&i<=30) // this is third if condition it is checked if the second if condition is not satisified.
{
	printf("%d is between 20 and 30",i);
}
getch();
}


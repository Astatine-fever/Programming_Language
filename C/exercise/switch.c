// form filling using switchcase 

#include<stdio.h>
#include<conio.h>
void main()
{
	char choice;
	printf("What is your preferred travelling method ? \n");
	printf("\n a,Car\n b,Bike\n c,Bus\n d,Walk\n");
	scanf(" %c",&choice);
	switch(choice)
	{
	case 'a':
		printf(" Your preferred travel method is by car \n");
		break;
	case 'b':
		printf(" Your preferred travel method is by bike \n");
		break;
	
	case 'c':
		printf(" Your preferred travel method is by bus \n");
		break;
	case 'd':
		printf(" Your preferred travel method is by walk \n");
		break;
		
	default:
	printf(" Please select a valid option \n");
		break;		
	}
getch();	
}

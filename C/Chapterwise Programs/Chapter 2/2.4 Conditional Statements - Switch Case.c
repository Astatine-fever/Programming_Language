// form filling using switchcase 

#include<stdio.h>
#include<conio.h>
void main()
{
	int choice;
	printf("What is your preferred travelling method ? \n");
	printf("\n 1,Car\n 2,Bike\n 3,Bus\n 4,Walk\n");
	scanf(" %d",&choice);
	switch(choice)
	{
	case 1:
		printf(" Your preferred travel method is by car \n");
		break;
	case 2:
		printf(" Your preferred travel method is by bike \n");
		break;
	
	case 3:
		printf(" Your preferred travel method is by bus \n");
		break;
	case 4:
		printf(" Your preferred travel method is by walk \n");
		break;
		
	default:
	printf(" Please select a valid option \n");
		break;		
	}
getch();	
}

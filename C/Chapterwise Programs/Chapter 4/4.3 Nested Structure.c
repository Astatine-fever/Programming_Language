// Nested Structures 
#include<stdio.h>
#include<conio.h>
struct viva // Structure 1 
{
	int a;
 	struct viva1 // Structure 2 inside the structure 1 
	{
		char name[50];
	}v1; // structure variable 2 
} v; //  structure variable 1 

void main()
{
	printf(" Enter the Name and Age \n");
	scanf("%s %d",&v.v1.name,&v.a);
	printf(" Your name is %s \n Your age is %d \n",v.v1.name,v.a);
	getch();
}

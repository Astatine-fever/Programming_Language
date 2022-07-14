#include<stdio.h>
#include<conio.h>
struct test // Structure Declaration //
{
	int mark[3]; // Structure with array datatype
	char name[20];
}sc;
void main()
{
	printf("enter your name \n");
	scanf("%s",&sc.name);
	printf("Enter Mark 1 and Mark2 \n");
	scanf("%d %d",&sc.mark[0],&sc.mark[1]);// array data inside the structure is accessed individually
	sc.mark[2] = sc.mark[0]+ sc.mark[1];
	printf("Your Name is %s \n",sc.name);
	printf(" Mark1: %d \n Mark2: %d \n Total: %d ",sc.mark[0],sc.mark[1],sc.mark[2]);
}


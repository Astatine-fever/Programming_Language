#include<stdio.h>
#include<conio.h>
struct test // Structure Declaration //
{
	int a,b,c;
	float avg;
	char name[20];
}sc;
void main()
{
	printf("enter your name \n");
	scanf("%s",&sc.name);
	printf("Enter Mark 1 and Mark2 \n");
	scanf("%d %d",&sc.a,&sc.b);
	sc.c = sc.a+ sc.b;
	sc.avg = sc.c/2; 
	printf("Your Name is %s \n",sc.name);
	printf(" Mark1: %d \n Mark2: %d \n Total: %d \n Avg: %f",sc.a,sc.b,sc.c,sc.avg);
}
	

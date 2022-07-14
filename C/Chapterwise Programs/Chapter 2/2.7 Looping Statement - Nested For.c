// Nested For Using Arrays 
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j; // Two dimensional array is called as matrix ..the subsets represents the rows and columns  
	char name[20]; // One Dimensional array - It is called as a list ... here it is used to get input as string  
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf(" Enter Values for a[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);	
		}
		
	}
	printf("\n");
	for (i=0;i<3;i++)
	{	
		for(j=0;j<3;j++)
		{
			
		printf("%d \t",a[i][j]);	
		}
		printf("\n");
	}
	
	
}

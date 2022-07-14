// Nested For Using Arrays 
#include<iostream>
using namespace std;
int main()
{
	int a[3][3],i,j; // Two dimensional array is called as matrix ..the subsets represents the rows and columns  
	char name[20]; // One Dimensional array - It is called as a list ... here it is used to get input as string  
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		cout<<" Enter Values for a["<<i<<"]["<<j<<"]  ";
		cin>>a[i][j];	
		}
		
	}
	cout<<"\n";
	for (i=0;i<3;i++)
	{	
		for(j=0;j<3;j++)
		{
			
		cout<<a[i][j]<<"\t";	
		}
		cout<<"\n";
	}
	
	
}

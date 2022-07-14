// Example of a Continue Statement 

#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0;
	for(;a<100;a++)
	{
	 if(a%2==0)continue;
	 printf("%d \n",a);
	}
}

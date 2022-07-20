// Pointer and Double pointer example 

#include<stdio.h>
#include<conio.h>
void main()
{	

int a,*b=0,**c=0;
printf("Enter the Value of A \n");
scanf("%d",&a);
printf("The Value Inside A is %d \n",a);
printf("The Value Inside B is %d \n ",b);
b=&a;
c=&b;
printf("The Address of A is	 %u \n",&a);
printf("The Value Inside B is %d \n ",b);
printf("The Address of B is %u \n",&b);
printf("The Value of C %u \n ",c);
printf("The Value of C %u \n ",*c);
printf("The Value of C %d \n ",**c);
}

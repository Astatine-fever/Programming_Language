// Example of Bitwise Operators  in C 

#include<stdio.h>
void main()
{
int a,b,c,d,e,f,g,h,i;
printf("Enter the value of A \n");
scanf("%d",&a);
printf("Enter the value of B \n");
scanf("%d",&b);
c=b<<2; // Left Shift Operator
d=a>>4; // Right shift Operator
e=a&b; // Bitwise And Operator 
f=a|b; // Bitwise Or Operator
g=a^b; // Exclusive  Or 
h=~a;  // Bitwise ones compliment 
i=~b;  // Bitwise ones compliment 
printf("bitwise operator examples\n",a);
printf(" The value of A= %d and B= %d \n",a,b);
printf("Left  Shift Operation of A %d \n",c);
printf("Right Shift Operation of A %d \n",d);
printf("The Bitwise AND Operation of A,B = %d \n",e);
printf("The Bitwise OR	Operation of A,B = %d \n",f);
printf("The Bitwise Exclusive OR of A,B = %d \n",g);
printf("Bitwise ones Compliment of A %d \n",h);
printf("Bitwise ones Compliment of B %d \n",i);
}

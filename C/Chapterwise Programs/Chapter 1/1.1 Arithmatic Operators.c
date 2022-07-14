// C Program for Arithmatic Operators 

#include<stdio.h> 
#include<conio.h>
int main()  // Main Functions 
{
int m,b,c,d,e,f,g;
printf("Enter 2 Number \n");
scanf("%d %d",&m,&b);
c=m+b;
d=m-b;
e=m*b;
f=b/m;
printf("%d + %d = %d \n",m,b,c);
printf("%d - %d = %d \n",m,b,d);
printf("%d * %d = %d \n",m,b,e);
printf("%d / %d = %d \n",b,m,f);
return 0;
}

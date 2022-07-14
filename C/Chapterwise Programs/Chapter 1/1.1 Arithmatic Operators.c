// C Program for Arithmatic Operators 

#include<stdio.h> 
#include<conio.h>
int main()  // Main Functions 
{
int a,b,c,d,e,f,g;
printf("Enter 2 Number \n");
scanf("%d %d",&a,&b);
c=a+b;
d=a-b;
e=a*b;
f=b/a;
printf("%d + %d = %d \n",a,b,c);
printf("%d - %d = %d \n",a,b,d);
printf("%d * %d = %d \n",a,b,e);
printf("%d / %d = %d \n",b,a,f);
return 0;
}

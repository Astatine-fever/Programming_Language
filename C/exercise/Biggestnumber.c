// biggest number of the c 

#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter 3 Numbers \n");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
{
	printf("A is the biggest number");
}
else if(b>a && b>c)
{
	printf("B is the biggest number");
}

else if(c>a && c>b)
{
	printf("C is the biggest number");
}
else
{
	printf("A,Band C are Equal");
}

}

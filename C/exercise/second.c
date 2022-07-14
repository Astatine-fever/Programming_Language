#include<stdio.h>
#include<conio.h>
void main()
{
//declaration part
int age;
char name[20];
float weight,height;
char gender[10];

// Getting the input
printf("Enter your Name: ");
scanf("%s",&name);  //  & --> address operator 
printf("Age : ");
scanf("%d",&age);
printf("Enter your weight :");
scanf("%f",&weight);
printf("Enter your height :");
scanf("%f",&height);
printf("Enter your gender");
scanf("%s",&gender);


//printing the output
printf("Name : %s \n",name);
printf("Age : %d \n",age);
printf("Weight : %f \n",weight);
printf("Height : %f \n",height);
printf("Gender : %s \n",gender);

getch();
}
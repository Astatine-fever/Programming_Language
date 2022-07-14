#include<stdio.h>
#include<conio.h>
int Emp_id,Salary,Total_sal,attendence,wage;
char Emp_name[50],Dept[50];

void entry(); // declaration 
int sal_calc(int x, int y); //declaration 
void display(); // declaration 

void main()
{
entry();
display();
getch();
}



void entry() // definition 
{
    printf("Enter Employee Id: ");
    scanf("%d",&Emp_id);
    printf("\nEnter Employee Name :");
    scanf("%s",&Emp_name);
    printf("\nEnter Your Department:");
    scanf("%s",&Dept);
    printf("\nEnter Attendence  :");
    scanf("%d",&attendence);
    printf("\nEnter per day wage :");
    scanf("%d",&wage);
    Salary=sal_calc(attendence,wage); // sending value to next method
}

int sal_calc(int x, int y) // x= attendance y = wage
{
    Total_sal=x*y;
    return Total_sal; // returns the value to previous method
}

void display()
{
    printf("Employee ID           : %d",Emp_id);
    printf("\nEmployee Name      : %s",Emp_name);
    printf("\nDepartment         : %s",Dept);
    printf("\nEmployee Attendence: %d",attendence);
    printf("\nPer day Salary     : %d",wage);
    printf("\nTotal Salary       : %d",Salary);
}
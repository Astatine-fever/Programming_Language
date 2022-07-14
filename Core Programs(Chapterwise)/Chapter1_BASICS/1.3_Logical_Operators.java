package Chapter1_BASICS;

import java.util.Scanner;

class Logical_Operators 
{
public static void main(String args[])
{
int a,b;
Scanner sc= new Scanner(System.in);
System.out.println("Enter A and B value");
a=sc.nextInt();
b=sc.nextInt();
if(a<b && a<10)
{
    System.out.println("A is Less than B and Less than 10");
}
else if(a>b || a>10)
{
    System.out.println("A is Greater than B or  Greater than 10");
}
else if(a==b != a<10)
    System.out.println("A and B value is same");
}
}

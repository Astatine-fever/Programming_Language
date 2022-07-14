package Chapter2_CONDITIONAL_STMTS;

// Simple If Else 

import java.io.*;
import java.util.*;
class ten
{
public static void main(String [] args)
{
int a,b;
 System.out.print("Enter A and B Value");
Scanner sc = new Scanner(System.in);
a=sc.nextInt();
b=sc.nextInt();
 if(a<b) // IF stmt is executed when stmt is true 
 {
  System.out.print("a is small");
 }
 else // Else stmt is executed when stmt is false 
 {
  System.out.print("b is small");
 }

}
}
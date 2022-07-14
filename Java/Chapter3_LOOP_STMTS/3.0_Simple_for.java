//  Sample For loop program to display number in ascending order

package Chapter3_LOOP_STMTS;
import java.util.*;

class loop_stmt1
{
public static void main(String args[]) // main program
{
   int a,i;
   System.out.println("Enter A Value");
   try (Scanner sc = new Scanner(System.in)) 
   {
      a=sc.nextInt();
   } 
   for(i=0;i<a;i++)
   {
      System.out.println(i);
   }
}
}
package Chapter2_CONDITIONAL_STMTS;

// IF Statements in Java with Recursion 

import java.util.*;
class class1  // Outer Class 
{
	
	 public static int m1,m2,m3,tot;
	 public static float avg;
	 public static String name;
	
	static class class2   // Inner Class 
	{
		class1 ar = new class1(); 
		Scanner s = new Scanner(System.in);
		public void name()  // Inner Class Method1  
		{
		 class2 ms1 = new class2();
		 System.out.println(" Enter Student name \n");
		 ar.name=s.nextLine();	
		ms1.eng(); // calling the next function 
		}
		public void eng()  // Inner Class Method2 
		{
		 class2 ms2 = new class2();
		 System.out.println(" Enter English Mark  \n");
		 ar.m1=s.nextInt();
		 if(ar.m1<0 || ar.m1>100) //Simple if statement
		 {
			System.out.println(" Enter Mark between 0 to 100  \n");
			eng(); // recursion
		 }
		 ms2.tam(); // calling the next function 
		}
		public void tam() // Inner Class Method3
		{
		 class2 ms3 = new class2(); 
		 System.out.println(" Enter Tamil Mark  \n");
		 ar.m2=s.nextInt();
		 if(ar.m2<0 || ar.m2>100) //Simple if statement 
		 {
			System.out.println(" Enter Mark between 0 to 100  \n");
			tam(); // recursion
		 }			
		 ms3.maths(); // calling the next function
		}
		public void maths() // Inner Class Method4
		{
		 System.out.println(" Enter Maths Mark  \n");
		 ar.m3=s.nextInt();
		 if(ar.m3<0 || ar.m3>100) // Simple if statement 
		 {
			System.out.println(" Enter Mark between 0 to 100  \n");
			maths(); // recursion
		 }
		}
	}
}
class newa extends class1 // Main Class 
{
	public static void main(String Args[]) // Main Function 
	{
		
		class1 ar = new class1(); // Outer Class Object 
		class2 m = new class2(); // Inner Class Object 
		m.name(); 
		tot=m1+m2+m3;
		if(m1>=35 && m2>=35&& m3>=35) // If Statement 
		{
			System.out.println("\nStudent name :"+name); 
			System.out.println("\nEnglish :"+m1);
			System.out.println("\nTamil :"+m2);
			System.out.println("\nMaths :"+m3);
			System.out.println("\nTotal :"+tot);
			System.out.println("\nResult : Pass");
			avg=tot/3;
			if(avg>90) // Nested if Statement 
			{
				System.out.println("\nAverage :"+avg );
				System.out.println("\nGrade : S Grade");
			}
			else if(avg>80) // Ladder if Statement 
			{
				System.out.println("\nAverage :"+avg );
				System.out.println("\nGrade : A Grade");
			}
			else if(ar.avg>70) // Ladder if Statement 
			{
				System.out.println("\nAverage :"+avg );
				System.out.println("\nGrade : B Grade");
			}
			else if(ar.avg<60) // Ladder If Statement 
			{
				System.out.println("\nAverage :"+avg );
				System.out.println("\nGrade : C Grade");
			}
		}
		else // Else statement for If-Else Statement 
		{
			System.out.println("\nStudent name :"+name);
			System.out.println("\nEnglish :"+m1);
			System.out.println("\nTamil :"+m2);
			System.out.println("\nMaths :"+m3);
			System.out.println("\nTotal :"+tot);
			System.out.println("\nResult : Fail ");
		}
	}
}

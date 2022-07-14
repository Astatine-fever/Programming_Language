package Chapter2_CONDITIONAL_STMTS;

// Ladder if  Statement 
import java.util.*;
class newa
{
	public static void main(String Args[])
	{
		boolean a ;
		Scanner c = new Scanner(System.in);
		System.out.println("Are you above 18 \n");
		System.out.println(" If Yes type true \n If No type false \n " );
		news:
		a=c.nextBoolean();
		if(a==true)
		{
			System.out.println(" The option you chooose is Yes");
		}	
		else if (a==false)
		{
			System.out.println(" The option you chooose is No");
		}
		else 
		{
			System.out.println(" Please Choose Yes or no ");	
		}
	}
}
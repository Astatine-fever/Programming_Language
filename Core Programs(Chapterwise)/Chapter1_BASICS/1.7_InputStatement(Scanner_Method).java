package Chapter1_BASICS;
import java.util.Scanner;

class inputclass 
{
public static void main(String args[])
{
int s_no;
String name;
float height;
Scanner s = new Scanner(System.in);
System.out.println("Kindly Enter your S_no");
s_no=s.nextInt();
System.out.println("Enter your Name");
name=s.nextLine();
System.out.println("Enter your Height");
height=s.nextFloat();
System.out.println("S_no:"+s_no);
System.out.println("Name:"+name);
System.out.println("Height:"+height);
}
}

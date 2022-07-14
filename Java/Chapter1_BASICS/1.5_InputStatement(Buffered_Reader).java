package Chapter1_BASICS;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.*;

class Buffered_Reader 
{

public static void main(String [] args) throws IOException
{
String a;	
InputStreamReader r = new InputStreamReader(System.in);
BufferedReader Br = new BufferedReader(r);	

System.out.println("Enter a Line into A");

a=Br.readLine();

System.out.println("A = "+a);
}
}	




package Chapter13_FILES;
import java.io.*;
import java.util.Scanner;
class files
{
	public static void main(String args[])
	{
		try
		{
			File test = new File("H:/Test/1/tet/te1.txt");
			Scanner my = new Scanner(test);
			while(my.hasNextLine())
			{
				String data = my.nextLine();
				System.out.println(data);
			}
			my.close();
		}
		catch(FileNotFoundException e)
		{
			System.out.println("An Error Occured");
		}
	}
}
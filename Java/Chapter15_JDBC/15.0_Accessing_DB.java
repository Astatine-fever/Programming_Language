package Chapter15_JDBC;
import java.sql.*; // this converts java arguments to string 
class JDBC_Table_Creation 
{
	/**
	 * @param args
	 * @throws Exception
	 */
	public static void main(String args[]) throws Exception
	{
		// This is to check whether the database is connected... using try catch
	try // This will try the statements 
	{
		//connection string
		Connection con = DriverManager.getConnection("jdbc:mysql://127.0.0.1:3310/?allowMultiQueries=true","root","System@123");
		
		
		System.out.println("Connected to Database");
		
		// driver class 
		Class.forName("com.mysql.cj.jdbc.Driver");	
		
		
		PreparedStatement ps0; 
		ps0=con.prepareStatement("use test1;");
		ps0.executeUpdate();
		System.out.println("Database selected");
		ps0 = con.prepareStatement("Create Table siva(S_no int(6) Not Null,Name varchar(30));insert into siva values(3963,'prasanna')");
		//ps0=con.prepareStatement("create table student(id int(8)")
		ps0.executeUpdate();
		System.out.println("Table Created");
		
	} 
	catch (Exception e) // This will catch any exception during try session 
	{
		// TODO Auto-generated catch block
		e.printStackTrace();
	}
		
		}
	}


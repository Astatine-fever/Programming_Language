package Chapter15_JDBC;

import java.sql.*;
	class Getting_result 
	{
		public static void main(String args[]) throws Exception
		{
			// This is to check whether the database is connected... using try catch
		try // This will try the statements 
		{
			Connection con = DriverManager.getConnection("jdbc:mysql://127.0.0.1:3309/?allowMultiQueries=true","root","");
			Class.forName("com.mysql.cj.jdbc.Driver");	
			
			PreparedStatement ps0; 
			ps0=con.prepareStatement("use office;");
			ps0.executeUpdate();
			System.out.println("Database selected");

			ps0 = con.prepareStatement("Select * from employee_list;");
			ps0.executeQuery();
			System.out.println("Table Selected");
			
			ResultSet rs = ps0.executeQuery();
			while(rs.next())//rs.next is used to get values continously till last row  
			{
				
				System.out.println(rs.getString(1)+" "+rs.getString(2)+" "+rs.getString(3)+" "+rs.getString(4));
		} 
		}
		catch (Exception e) // This will catch any exception during try session 
		{
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
			
			
		}


}
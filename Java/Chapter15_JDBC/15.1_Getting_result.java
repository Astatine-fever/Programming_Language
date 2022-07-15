package Chapter15_JDBC;

import java.sql.*;
	class Getting_result 
	{
		public static void main(String args[]) throws Exception
		{
			// This is to check whether the database is connected... using try catch
		try // This will try the statements 
		{
			Connection con = DriverManager.getConnection("jdbc:mysql://127.0.0.1:3310/JDBC1?allowMultiQueries=true","root","Sytem@123");
			Class.forName("com.mysql.cj.jdbc.Driver");	
			PreparedStatement ps = con.prepareStatement("Select * from siva");//Insert into astatine values(2314,'Harishankar');
			//ps.executeUpdate();
			System.out.println("Table Created");
			ResultSet rs = ps.executeQuery();
			while(rs.next())//rs.next is used to get values continously till last row  
			{
				
				System.out.println(rs.getInt(1)+" "+rs.getString(2));
		} 
		}
		catch (Exception e) // This will catch any exception during try session 
		{
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
			
			
		}


}
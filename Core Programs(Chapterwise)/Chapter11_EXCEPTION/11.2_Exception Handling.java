package Chapter11_EXCEPTION;

class  ex_demo2 
{
        public static void main(String args[])
        {  
         try
         {  
            //code that may raise exception  
            int data=100/0;  
         }
         catch(Exception e)
         {
            System.out.println(e); // both used to trace the Exception in 
            e.printStackTrace();
         }  
         //rest code of the program   
         System.out.println("rest of the code...");  
         
        }  
}  
    

package Chapter6_ACCESS_MODIFIERS;

class Pri_Class 
{
    // private class cannot be accessed outside the class. 
    
    
        private static int data=40;  
        private static void msg()
        {
            System.out.println("Hello java");
        }  
    }  
          
class PrivateClass1 extends Pri_Class
        {  
         public static void main(String args[]){   
           System.out.println(data); //Compile Time Error  
           msg(); //Compile Time Error  
           }  
        }
        
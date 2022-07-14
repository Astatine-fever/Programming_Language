package Chapter6_ACCESS_MODIFIERS;

// protected class can be accessed outside a class using objects 

class A
{  
protected void msg()
{
    System.out.println("Hello");
}  
}  
  
class B 
{  
  public static void main(String args[])
    {  
        A obj = new A();  
        obj.msg();  
    }  
}
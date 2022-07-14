package Chapter8_INHERITANCE;

class Single_inher_Parent
{  
    void eat()
    {
        System.out.println("eating...");
    }  
}  

class Single_inher_Child extends Single_inher_Parent
{  
   void bark()
   {
    System.out.println("barking...");
   }  
}  
class Single_inher
{  
public static void main(String args[])
{  
     Single_inher_Child d=new Single_inher_Child();  
     d.bark();  
     d.eat();  
}
}
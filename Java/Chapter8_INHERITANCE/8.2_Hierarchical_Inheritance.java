package Chapter8_INHERITANCE;

class Hierar_inhrt_Parent
{  
    void eat()
    {
        System.out.println("eating...");
    }  
}  

class Hierar_inhrt_Child0 extends Hierar_inhrt_Parent
{  
    void bark()
    {
        System.out.println("barking...");
    }  
}  
class Hierar_inhrt_Child1 extends Hierar_inhrt_Parent
{  
    void meow()
    {
        System.out.println("meowing...");
    }  
}  

class Hierar_inhrt
{  
public static void main(String args[])
{  
    Hierar_inhrt_Child1 c=new Hierar_inhrt_Child1();  
    c.meow();  
    c.eat();  
    //c.bark();//C.T.Error  
}
}
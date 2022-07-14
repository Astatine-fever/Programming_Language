package Chapter8_INHERITANCE;

//parent class  
class Hybrid_inhrt_grandparent  
{  
    public void show()  
    {
        System.out.println("I am Hybrid_inhrt_grandparent.");  
    }  
}  
//inherits Hybrid_inhrt_grandparent properties  
class Hybrid_inhrt_Father extends Hybrid_inhrt_grandparent  
{  
    public void show()  
    {  
        System.out.println("I am Hybrid_inhrt_Father.");  
    }  
}  
//inherits Hybrid_inhrt_Father properties  
class Hybrid_inhrt_Son extends Hybrid_inhrt_Father  
{  
    public void show()  
    {  
        System.out.println("I am Hybrid_inhrt_Son.");  
    }  
}  
//inherits Hybrid_inhrt_Father properties  
class Hybrid_inhrt_Daughter extends Hybrid_inhrt_Father  
{  
    public void show()  
    {  
        System.out.println("I am a Hybrid_inhrt_Daughter.");  
    }  
    
    public static void main(String args[])  
    {  
        Hybrid_inhrt_Daughter obj = new Hybrid_inhrt_Daughter();  
        obj.show();  
    }  
}  
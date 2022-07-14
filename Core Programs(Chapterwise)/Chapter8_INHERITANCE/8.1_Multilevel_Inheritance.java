package Chapter8_INHERITANCE;

class Multi_inhrt_parent
{  
    void eat()
    {
        System.out.println("eating...");
    }  
}  
class Multi_inhrt_child extends Multi_inhrt_parent
{  
    void bark()
    {
        System.out.println("barking...");
    }  
}  
class Multi_inhrt_grd_child extends Multi_inhrt_child
{  
    void weep()
    {
        System.out.println("weeping...");
    }  
}  
class Multi_inhrt
{  
public static void main(String args[])
{  
 Multi_inhrt_grd_child d=new Multi_inhrt_grd_child();  
d.weep();  
d.bark();  
d.eat();  
}} 
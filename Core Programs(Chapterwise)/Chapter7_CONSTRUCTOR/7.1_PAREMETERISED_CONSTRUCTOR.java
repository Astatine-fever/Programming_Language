package Chapter7_CONSTRUCTOR;
//Java program to overload constructors  
class construct_ex1
{  
    int id;  
    String name;  
    int age;  
    //creating two arg constructor  
    construct_ex1(int i,String n)
    {  
        id = i;  
        name = n;  
    }  
    //creating three arg constructor  
    construct_ex1(int i,String n,int a)
    {  
        id = i;  
        name = n;  
        age=a;  
    }  
    void display()
    {
        System.out.println(id+" "+name+" "+age);
    }  
   
    public static void main(String args[])
    {  
        construct_ex1 s1 = new construct_ex1(111,"Karan");  
        construct_ex1 s2 = new construct_ex1(222,"Aryan",25);  
        s1.display();  
        s2.display();  
   }  
}

package Chapter12_THIS;

class this_ex2
{

    this_ex2() // default constructor
    {  
        this(5);  
        System.out.println("hello a");  
    }  
    
    this_ex2(int x) //parameterised constructor
    {  
        System.out.println(x);  
    }  
}  
class testing_this_ex2
{  
    public static void main(String args[])
    {  
    this_ex2 th=new this_ex2();  
    }
}
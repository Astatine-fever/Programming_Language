package Chapter12_THIS;

class this_ex1
{  
    void m()
    {
        System.out.println("hello m");
    }  
    
    void n()
    {  
    System.out.println("hello n");  
    //m();//same as this.m()  
    this.m();  
    }  

}  
class testing_this_ex1
{  
    public static void main(String args[])
    {  
    this_ex1 a=new this_ex1();  
    a.n();  
    }
}  
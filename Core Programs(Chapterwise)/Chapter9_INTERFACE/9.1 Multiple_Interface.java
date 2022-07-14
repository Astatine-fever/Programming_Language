package Chapter8_Interface;

interface  Multiple_Interface1 
{
 void test1();

}

interface Multiple_Interface2
{
 void test2();
}

class Multiple implements Multiple_Interface1,Multiple_Interface2
{
public void test1()
{
    System.out.println("A Sample Test function for Interface 1 ");
}

public void test2()
{
    System.out.println("A Sample Test function for Interface 2 ");
}

public static void main(String[] args) 
{
  Multiple mi = new Multiple();
  mi.test1();
  mi.test2();
    
}
}
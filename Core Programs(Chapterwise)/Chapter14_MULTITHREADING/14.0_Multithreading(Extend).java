package Chapter14_MULTITHREADING;

class Multi_thr0 extends Thread // Thread class is extended here , 
{
    public static void main(String[] args) 
    {
      Multi_thr0 Mt0 = new Multi_thr0();
      Mt0.start();// start method invokes the run 
      Mt0.test();
      System.out.println("This code is outside of the thread");
    }
    public void run() // method run when it is called by start
    {
      System.out.println("This is thread method ");
    }

    public void test()
    {
      System.out.println("Normal Method ");
    }
  }
package Chapter14_MULTITHREADING;

class Multi_thr1 implements Runnable //Runnable class is an interface 
{
    public static void main(String[] args) 
    {
      Multi_thr1 obj = new Multi_thr1();
      Thread thread = new Thread(obj);
      thread.start();
      obj.test();
      System.out.println("This code is outside of the thread");
    }
    /* (non-Javadoc)
     * @see java.lang.Runnable#run()
     */
    public void run() 
    {
      System.out.println("This code is running in a thread");
    }
    public void test()
    {
      System.out.println("this is normal method");
    }
  }
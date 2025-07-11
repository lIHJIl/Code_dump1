class RunnableThreadDemo implements Runnable
{
    int i;
   public void run()
    {
        try
        {
            for(i=1;i<=10;i++)
            {
                Thread.sleep(1000);
                System.out.println("Value of Thread "+i);
            }
        }
        catch(Exception e){}
    }
}
public class Main5 
{
    public static void main(String args[])
    {
        RunnableThreadDemo obj = new RunnableThreadDemo();
        Thread t1 = new Thread(obj);
        Thread t2 = new Thread(obj);
        t1.start();
        t2.start();
    }
}

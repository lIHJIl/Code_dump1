class ThreadA extends Thread
{
    int i;
    public void run()
    {
        try
        {
            for(i=1;i<=10;i++)
            {
                if(i>5)
                {
                    stop();
                }
                System.out.println("Thread A = "+i);
            }
        }
        catch(Exception e){}
    }
}
class ThreadB extends Thread
{
    int i;
    public void run()
    {
        try
        {
            for(i=1;i<=10;i++)
            {
                Thread.sleep(1000);
                System.out.println("Thread B = "+i);
            }
        }
        catch(Exception e){}
    }
}
class ThreadC extends Thread
{
    int i;
    public void run()
    {
        try
        {
            for(i=1;i<=10;i++)
            {
                if(i>=6)
                {
                    Thread.yield();
                }
                System.out.println("Thread C = "+i);
            }
        }
        catch(Exception e){}
    }
}
public class Main1 
{
    public static void main(String args[])
    {
        ThreadA a = new ThreadA();
        a.start();
        ThreadB b = new ThreadB();
        b.start();
        ThreadC c = new ThreadC();
        c.start();
    }
}

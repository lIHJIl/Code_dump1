

class ThreadFour extends Thread
{
    int i;
    ThreadFour(String tname)
    {
        super(tname);
        Thread.currentThread();
    }
    public void run()
    {
        try
        {
            for(i=1;i<=10;i++)
            {
                Thread.sleep(1000);
                System.out.println("Thread "+this.getName()+" isAlive "+this.isAlive()+" Priority "+this.getPriority()+" Value "+i);
            }
        }
        catch(Exception e){}
    }
}
public class Main3
{
    public static void main(String args[])
    {
        ThreadFour A = new ThreadFour(" A ");
        A.start();
        try
        {
            A.join();
        }
        catch(Exception ex){}
        ThreadFour B = new ThreadFour(" B ");
        B.start();
        try
        {
            B.join(5000);
        }
        catch(Exception ex){}
        ThreadFour C = new ThreadFour(" C ");
         C.start();
        try
        {
            C.join();
        }
        catch(Exception ex){}
     }
}

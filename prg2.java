class MultiThread extends Thread {
    public void run() 
    {

        try
        {
            for (int i = 0; i <20 ; i++)
            {
                System.out.println("Thread is running..."+(i+1)+" Times");
                Thread.sleep(1000);
            }

        }
        catch (InterruptedException e) 
        {
            System.out.println("Thread interrupted: " + e.getMessage());
        }
    }
}

public class prg2 {
    public static void main(String[] args)
    {
        MultiThread m1 = new MultiThread();
        m1.start();
        System.out.println("Hello, World!");
    }

}
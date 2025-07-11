class MultiThreaded extends Thread {
    public void run()
    {
        System.out.println("Thread is running...");
        try
        {
            Thread.sleep(1000);
        }
        catch (InterruptedException e)
        {
            System.out.println("Thread interrupted: " + e.getMessage());
        }
    }
}

public class prg1 {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}
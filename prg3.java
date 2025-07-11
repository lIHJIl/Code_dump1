class UserThread extends Thread {
    public UserThread(String name) {
        super(name);
    }

    @Override
    public void run() {
        System.out.println("User thread '" + getName() + "' started.");
        try {
            Thread.sleep(5000); // Simulate some work
        } catch (InterruptedException e) {
            System.out.println("User thread '" + getName() + "' interrupted.");
        }
        System.out.println("User thread '" + getName() + "' finished.");
    }
}

class DaemonTask extends Thread {
    public DaemonTask(String name) {
        super(name);
        setDaemon(true); // Mark this thread as a daemon
    }

    @Override
    public void run() {
        System.out.println("Daemon thread '" + getName() + "' started.");
        while (true) {
            try {
                Thread.sleep(1000);
                System.out.println("Daemon thread '" + getName() + "' is still running...");
            } catch (InterruptedException e) {
                System.out.println("Daemon thread '" + getName() + "' interrupted.");
                break;
            }
        }
        System.out.println("Daemon thread '" + getName() + "' finished (or was interrupted).");
    }
}

public class prg3 {
    public static void main(String[] args) throws InterruptedException {
        UserThread userThread1 = new UserThread("User-1");
        DaemonTask daemonThread1 = new DaemonTask("Daemon-1");

        userThread1.start();
        daemonThread1.start();

        Thread.sleep(7000); // Let the user thread finish

        System.out.println("Main thread finished.");
        // The JVM will now exit, even if daemonThread1 is still in its loop.
    }
}
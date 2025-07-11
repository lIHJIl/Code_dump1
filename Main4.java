class Table
{
    int i, ans;
   synchronized void printTable(int num)
    {
        try
        {
            for(i=1;i<=10;i++)
            {
                ans = num * i;
                Thread.sleep(1000);
                System.out.println(num+" X "+i+" = "+ans);
            }
        }
        catch(Exception e){}
    }
}
class Monu extends Thread
{
    Table t;
    Monu(Table t)
    {
        this.t = t;
    }
    public void run()
    {
        t.printTable(9);
    }
}
class Sonu extends Thread
{
    Table t;
    Sonu(Table t)
    {
        this.t = t;
    }
    public void run()
    {
        t.printTable(12);
    }
}
public class Main4 
{
    public static void main(String args[])
    {
        Table obj = new Table();
        Monu t1 = new Monu(obj);
        Monu t2 = new Monu(obj);
        t1.start();
        t2.start();
    }
}

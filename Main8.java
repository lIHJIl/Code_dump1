abstract class Employee
{
    abstract void sayHello();
}
class Clerk extends Employee
{
    void sayHello()
    {
        System.out.println("We Are Clerks !");
    }
}
class Manager extends Employee
{
    void sayHello()
    {
        System.out.println("We Are Managers !");
    }
}
class Programmer extends Employee
{
    void sayHello()
    {
        System.out.println("We Are Programmers !");
    }
}
public class Main8 
{
    public static void main(String args[])
    {
        Clerk c = new Clerk();
        Manager m = new Manager();
        Programmer p = new Programmer();
        c.sayHello();
        m.sayHello();
        p.sayHello();
    }
}

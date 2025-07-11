import javax.swing.*;
interface Geo
{
    final double PI = Math.PI;
    void area();
    default void check()
    {
        System.out.println("I am interface Geo !");
    }
}
interface AdvCircle extends Geo
{
     void volume();
}
class InterfaceCircle implements AdvCircle
{
    double radius, height;
    void getRadius()
    {
        radius = Double.parseDouble(JOptionPane.showInputDialog("Enter Circle Radius"));
    }
    public void area()
    {
        System.out.println("Circle Area ="+PI*radius*radius);
    }
    public void volume()
    {
        radius = Double.parseDouble(JOptionPane.showInputDialog("Enter Circle Radius"));
        height = Double.parseDouble(JOptionPane.showInputDialog("Enter Circle Height"));
        System.out.println("Cylinder Volume "+PI*radius*radius*height);
    }
}
class InterfaceTriangle implements Geo
{
    double height, width;
    void getDim()
    {
         height = Double.parseDouble(JOptionPane.showInputDialog("Enter Triangle Height"));
         width = Double.parseDouble(JOptionPane.showInputDialog("Enter Triangle Width"));
    }
    public void area()
    {
        System.out.println("Triangle Area ="+(height*width)/2);
    }
}
public class Main10 
{
    public static void main(String args[])
    {
        InterfaceCircle circle = new InterfaceCircle();
        circle.getRadius();
        circle.area();
        circle.volume();
        circle.check();
        
        InterfaceTriangle tr = new InterfaceTriangle();
        tr.getDim();
        tr.area();
        tr.check();
    }
}

abstract class AbstractShape
{
    double dim1, dim2, dim3;
    final double PI = 3.1428;
    AbstractShape()
    {
        this.dim1 = this.dim2 = this.dim3 = 0.0;
    }
    AbstractShape(double x)
    {
        this.dim1 = x;
    }
    AbstractShape(double dim1, double dim2)
    {
        this.dim1 = dim1;
        this.dim2 = dim2;
    }
    AbstractShape(double dim1, double dim2, double dim3)
    {
        this.dim1 = dim1;
        this.dim2 = dim2;
        this.dim3 = dim3;
    }
    void sayHello()
    {
        System.out.println("-----------------Abstract Class Shape-----------");
    }
    abstract void getArea();
}
class AbsRectangle extends AbstractShape
{
    AbsRectangle(double height, double width)
    {
        super(height, width);
    }
    void getArea()
    {
        System.out.println("Rectangle Area = "+(dim1*dim2));
    }
}
class AbsCircle extends AbstractShape
{
    AbsCircle(double radius)
    {
        super(radius);
    }
    AbsCircle(double radius, double height)
    {
        super(radius, height);
    }
    void getArea()
    {
        System.out.println("Circle Area = "+Math.round(PI*dim1*dim1));
    }
}
public class Main9 
{
    public static void main(String args[])
    {
        AbsRectangle rect = new AbsRectangle(12.25, 45.66);
        rect.getArea();
        rect.sayHello();
        AbsCircle circle = new AbsCircle(77.56);
        circle.getArea();
        circle.sayHello();
    }
}

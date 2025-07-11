class NewShape
{
    double dim1, dim2, dim3;
    final double PI = 3.1428;
    NewShape()
    {
        this.dim1 = this.dim2 = this.dim3 = 0.0;
    }
    NewShape(double x)
    {
        this.dim1 = x;
    }
    NewShape(double dim1, double dim2)
    {
        this.dim1 = dim1;
        this.dim2 = dim2;
    }
    NewShape(double dim1, double dim2, double dim3)
    {
        this.dim1 = dim1;
        this.dim2 = dim2;
        this.dim3 = dim3;
    }
}
class NewRectangle extends NewShape
{
    NewRectangle(double height, double width)
    {
        super(height, width);
    }
    void getArea()
    {
        System.out.println("Rectangle Area = "+(dim1*dim2));
    }
}
class NewCircle extends NewShape
{
    NewCircle(double radius)
    {
        super(radius);
    }
    NewCircle(double radius, double height)
    {
        super(radius, height);
    }
    void getArea()
    {
        System.out.println("Circle Area = "+(PI*dim1*dim1));
    }
}
class NewTriangle extends NewShape
{
    NewTriangle(double height, double width)
    {
        super(height, width);
    }
    void getArea()
    {
        System.out.println("Triangle Area = "+(dim1*dim2)/2);
    }
}
class NewCylinder extends NewCircle
{
    NewCylinder(double radius, double height)
    {
        super(radius, height);
    }
    void getVolume()
    {
        System.out.println("Cylinder Volume = "+(PI*dim1*dim1*dim2));
    }
}
public class Main6 
{
    public static void main(String args[])
    {
        NewRectangle rect = new NewRectangle(15.23, 13.25);
        rect.getArea();
        NewCircle cr = new NewCircle(12.75);
        cr.getArea();
        NewTriangle tr = new NewTriangle(5.50, 7.58);
        tr.getArea();
        NewCylinder cy = new NewCylinder(14.25, 22.50);
        cy.getVolume();
    }
}


// Function Overriding
import javax.swing.*;
class NewMathOne
{
    int x, y;
    void max()
    {
        x = Integer.parseInt(JOptionPane.showInputDialog("Enter Value of X"));
        y = Integer.parseInt(JOptionPane.showInputDialog("Enter Value of Y"));
        if(x!=y)
        {
            if(x>y)
            {
                System.out.println("Max = "+x);
            }
            else
            {
                System.out.println("Max = "+y);
            }
        }
        else
        {
            System.out.println("Both Are Equal !");
        }
    }
    
}
class NewMathTwo extends NewMathOne
{
    int z;
    void   max()
    {
        x = Integer.parseInt(JOptionPane.showInputDialog("Enter Value of X"));
        y = Integer.parseInt(JOptionPane.showInputDialog("Enter Value of Y"));
        z = Integer.parseInt(JOptionPane.showInputDialog("Enter Value of Z"));
        if((x!=y)&&(y!=z)&&(z!=x))
        {
            if(x>y)
            {
                if(x>z)
                {
                    System.out.println("Max = "+x);
                }
                else
                {
                    System.out.println("Max = "+z);
                }
            }
            else
            {
                if(y>z)
                {
                    System.out.println("Max = "+y);
                }
                else
                {
                    System.out.println("Max = "+z);
                }
            }
        }
        else
        {
            System.out.println("Both Are Equal !");
        }
    }
    void getSuperMax()
    {
        super.max();
    }
}
public class Main7 
{
    public static void main(String args[])
    {
        //NewMathTwo obj = new NewMathTwo();
        //obj.max();
        //obj.getSuperMax();
        
        NewMathOne reff;
        NewMathOne o1 = new NewMathOne();
        NewMathTwo o2 = new NewMathTwo();
        
        reff = o1;
        reff.max(); // this will call parent max()
        
        reff = o2;
        reff.max(); // this will call child max()
    }
}

import javax.swing.*;
class MeraException extends Exception
{
    void getMyMessage()
    {
        System.out.println("Mera Wala Exception Aaya Hai !");
    }
}
public class Main42
{
    public static void main(String args[])
    {
        int bnum, pow, ans = 1, i;
        try
        {
            bnum = Integer.parseInt(JOptionPane.showInputDialog("Enter Base number"));
            pow = Integer.parseInt(JOptionPane.showInputDialog("Enter Power"));
            if(bnum>0&&pow>=0)
            {
                for(i=1;i<=pow;i++)
                {
                    ans = ans * bnum;
                }
                System.out.println("Power  = "+ans);
            }
            else
            {
                throw new MeraException();
            }
        }
        catch(MeraException e)
        {
            e.getMyMessage();
        }
    }
}

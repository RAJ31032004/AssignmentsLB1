import java.lang.*;

/////////////////////////////////////////////////////////////////////////////
//  Function Name :     FindMin
//  Description :       To check a number is maximum
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              25/10/2025
///////////////////////////////////////////////////////////////////////////////


class Logic
{
    void FindMin(int a, int b, int c)
    {
        
        if(a <= b && a <= c)                                                //  Check if 'a' is less than or equal to both 'b' and 'c'

        {
            System.out.println(a + " is the minimum number.");
        }
        
        else if(b <= c)                                   
        {
            System.out.println(b + " is the minimum number.");
        }
                                                                             // If neither 'a' nor 'b' is the min, 'c' must be the minimum
        else
        {
            System.out.println(c + " is the minimum number.");
        }
        
    }
}

class program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.FindMin(3, 7, 2);
    }
}

/*
 * Time Complexity : O(N)
 */
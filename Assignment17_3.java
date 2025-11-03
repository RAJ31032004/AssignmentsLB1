import java.lang.*;                                        // For input and output

//////////////////////////////////////////////////////////////////////////////
//  Function Name :     FindMax
//  Description :       To check a number is maximum
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              25/10/2025
///////////////////////////////////////////////////////////////////////////////


class Logic
{
    void FindMax(int a,int b)
    {
        if(a == b)
        {
            System.out.println("Both numbers are equal: " + a);
        }
        
        else if(a > b)                                            // Check if 'a' is greater than 'b'
        {
            System.out.println(a + " is the maximum number.");
        }
       
        else                                                       // If neither of the above, 'b' must be greater
        {
            System.out.println(b + " is the maximum number.");
        }
        
    }
}

class program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.FindMax(20, 15);
    }
}

/*
 * Time complexity : O(N)
 */
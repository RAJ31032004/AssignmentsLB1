import java.lang.*;                               // To import java language

////////////////////////////////////////////////////////////////////////////
//  Function Name :     PrintReverse
//  Description :       To print the reverse number
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              2/11/2025
///////////////////////////////////////////////////////////////////////////////
class Logic
{
    void PrintReverse(int n)
    {
        for (int i = n; i >= 1; i--) 
        {
            System.out.println(i);                  // Print the current value of 'i'
        }
    }
}

class program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        
        obj.PrintReverse(10); 
    }
}

/*
 * Time Complexity: O(N)
 */
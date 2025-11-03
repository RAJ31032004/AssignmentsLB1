import java.lang.*;                                    // To import java language

////////////////////////////////////////////////////////////////////////////
//  Function Name :     FindSmallestDigit
//  Description :       To find the smallest digit.
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              2/11/2025
//////////////////////////////////////////////////////////////////////////////

class Logic
{
    void FindSmallestDigit(int num)
    {
        int originalNum = num;

        
        if (num < 0) {                                      // Handle negative numbers by using their absolute value
            num = -num; 
        }

        if (num == 0) {
            System.out.println("The smallest digit in 0 is: 0");
            return; 
        }

    
        int smallestDigit = 9;                              

        while (num > 0)
        {
             int digit = num % 10;                           // Get the last digit

            if (digit < smallestDigit)
            {
                smallestDigit = digit;
            }

            num = num / 10;                                 // Remove the last digit from 'num'
        }

        System.out.println("The smallest digit in " + originalNum + " is: " + smallestDigit);
    }
}

class program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        
        obj.FindSmallestDigit(45872);

    }
}

/*
 * Time Complexity : O(N)
 */
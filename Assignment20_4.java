import java.lang.*;                               // To import java language

////////////////////////////////////////////////////////////////////////////
//  Function Name :     FindLargestDigit
//  Description :       To find the largest digit.
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              2/11/2025
//////////////////////////////////////////////////////////////////////////////

class Logic
{
    void FindLargestDigit(int num)
    {
        int originalNum = num; 
        if (num < 0) {
            num = -num; 
        }

        int largestDigit = 0;

        while (num > 0)
        {
            
            int digit = num % 10;             // Get the last digit using the modulo operator

           
            if (digit > largestDigit)         // Check if this digit is larger than the current largest
            {
                largestDigit = digit;        // If it is, update largestDigit
            }

            num = num / 10;                  // Remove the last digit from 'num' using integer division
        }

        // 8. Print the final result
        System.out.println("The largest digit in " + originalNum + " is: " + largestDigit);
    }
}

class program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        
        obj.FindLargestDigit(83429);
        
    }
}

/*
 * Time Complexity : O(N)
 */
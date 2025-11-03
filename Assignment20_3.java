import java.lang.*;                               // To import java language

////////////////////////////////////////////////////////////////////////////
//  Function Name :     checkPerfect
//  Description :       To check the perfect number.
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              2/11/2025
///////////////////////////////////////////////////////////////////////////////


class Logic
{
    void CheckPerfect(int num)
    {
        int sum = 0;

        for (int i = 1; i <= num / 2; i++)                          // Loop from 1 up to half of the number (num / 2).
        {
            
            if (num % i == 0)                                       // Check if 'i' is a divisor of 'num'
            {
                sum = sum + i;                                      // If it is, add 'i' to the sum
            }
        }

        if (sum == num && num > 1)                                   // Ensure num is positive and not 1
        {
            System.out.println(num + " is a perfect number.");
        }
        else
        {
            System.out.println(num + " is not a perfect number.");
        }
    }
}

class program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        
        obj.CheckPerfect(6);                                        // This will test the number 6

        
    }
}

/*
 * Time Complexity: O(N)
 */
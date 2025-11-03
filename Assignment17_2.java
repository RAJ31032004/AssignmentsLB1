import java.lang.*;                      // To import java language

//////////////////////////////////////////////////////////////////////////////
//  Function Name :     CheckPalindrome
//  Description :       To check if a number is a palindrome
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              25/10/2025
///////////////////////////////////////////////////////////////////////////////


class Logic
{
    void CheckPalindrome(int num)
    {
        int iRev = 0;                       // This will store the reversed number
        int iDigit = 0;                     // This will hold the last digit
        
        int originalNum = num; 


        while(num != 0)
        {
            iDigit = num % 10;              // Get the last digit
            iRev = (iRev * 10) + iDigit;    // Build the new reversed number
            num = num / 10;                 // Remove the last digit from 'num'
        }

        if(originalNum == iRev)
        {
            System.out.println(originalNum + " is a Palindrome.");
        }
        else
        {
            System.out.println(originalNum + " is not a Palindrome.");
        }
    }
}

class program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
    
        obj.CheckPalindrome(121);
    }
}

/*
 * Time Complexity : O(N)
 */
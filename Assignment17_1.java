import java.lang.*;                      // import java language

//////////////////////////////////////////////////////////////////////////////
//  Function Name :     SumOfDigits
//  Description :       To get the sum of digits 
//  Input :             Integer
//  Output :            Integer (Prints the sum)
//  Author :            Raj Samir Jadhav
//  Date :              25/10/2025
///////////////////////////////////////////////////////////////////////////////


class Logic
{
    void SumOfDigits(int num)
    {
        int iSum = 0;                       // This will store the running sum
        int iDigit = 0;                     // This will hold the last digit

        int originalNum = num;

        if(num < 0)
        {
            num = -num;
        }

        while(num != 0)                     // Loop as long as there are digits left
        {
            iDigit = num % 10;              // Get the last digit
            iSum = iSum + iDigit;           // Add the last digit to the sum
            num = num / 10;                 // Remove the last digit
        }

        System.out.println("Sum of digits in " + originalNum + " is: " + iSum);
    }
}

class program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.SumOfDigits(1234);
    }
}

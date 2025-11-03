import java.lang.*;

//////////////////////////////////////////////////////////////////////////////
//  Function Name :     CountDigits
//  Description :       To Reverse number
//  Input :             Integer
//  Output :            Integer 
//  Author :            Raj Samir Jadhav
//  Date :              25/10/2025
///////////////////////////////////////////////////////////////////////////////


class Logic
{
    void CountDigits(int num)
    {
        
        int iCount = 0;                                         // this will store the count of digits   
       
        int originalNum = num;                                   // Save the original number for the output message

        
        if(num < 0)                                              //  Handle negative numbers by making them positive
        {
            num = -num;
        }

           do
        {
            iCount++;                                            // Increment the digit counter
            num = num / 10;                                      // Remove the last digit from the number
        } 
        while (num != 0);                                              

        System.out.println("Number of digits in " + originalNum + " is: " + iCount);

    }
}

class program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CountDigits(7865);
    }
}

/*
 * Time Complexity : O(N)
 */
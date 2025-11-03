import java.lang.*;                      // to import java language

//////////////////////////////////////////////////////////////////////////////
//  Function Name :     ReverseNumber
//  Description :       To Reverse number
//  Input :             Integer
//  Output :            Integer (the reversed number)
//  Author :            Raj Samir Jadhav
//  Date :              25/10/2025
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void ReverseNumber(int num)
    {
        int iRev = 0;                       // This will store the reversed number
        int iDigit = 0;                     // This will temporarily hold each digit
        
        int originalNum = num; 

        while(num != 0)
        {
            iDigit = num % 10;

            iRev = (iRev * 10) + iDigit;

            num = num / 10;
        }

        System.out.println("The reverse of " + originalNum + " is: " + iRev);
    }
}


class program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.ReverseNumber(344);
    }
}

/*
 * Time Complexity : O(N)
 */
import java.lang.*;                                           // java language import
///////////////////////////////////////////////////////////////////////////////
//    Function Name :       CheckEvenOdd
//    Description :         To Check whether the number is even or odd
//    Input :               Integer
//    Output :              even or odd
//    Author :              Raj Samir Jadhav
//    Date :                25/10/2025
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void checkEvenOdd(int num)
    {
        if((num % 2) == 0)                                  // to check whether the number is even
        {
            System.out.println(num + " is an Even number.");  
        }
        else
        {
            System.out.println(num + " is an Odd number.");    // or else it is odd
        }
        
    }
}

class program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkEvenOdd(7);                               // Test with number 7
    }
}
/*
  Time Complexity : O(N)
 */
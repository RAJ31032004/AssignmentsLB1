import java.lang.*;

//////////////////////////////////////////////////////////////////////////////
//    Function Name :       FindFactorial
//    Description :         To Check whether the number is even or odd
//    Input :               Integer
//    Output :              even or odd
//    Author :              Raj Samir Jadhav
//    Date :                25/10/2025
///////////////////////////////////////////////////////////////////////////////
class Logic
{
    void findFactorial(int num)
    {
        long iFact = 1;
        int i = 0;

        if(num < 0)
        {
            System.out.println("Factorial is not defined for negative numbers.");
            return;
        }

        for(i = num; i >= 1; i--)                                        
        {
            iFact = iFact * i;
        }
        
        System.out.println("Factorial of " + num + " is: " + iFact);
    }
}

class program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.findFactorial(5);  

        obj.findFactorial(0);  
    }
}

/*
 * Time Complexity : o(N)
 */
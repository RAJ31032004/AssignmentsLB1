////////////////////////////////////////////////////////////////////////////
//  Function Name :     ProductOfDigits
//  Description :       To check a product of Digits
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              2/11/2025
///////////////////////////////////////////////////////////////////////////////

class Logic
{
    void ProductOfDigits(int num) 
    {
        int originalNum = num;

        if (num < 0) { 
            num = -num;
        }

        if (num == 0) { 
            System.out.println("The product of digits in 0 is: 0");
            return; 
        }
        
        int product = 1;

        while (num > 0)
        {
            int digit = num % 10; 
            product = product * digit;
            num = num / 10; 
        }

        System.out.println("The product of digits in " + originalNum + " is: " + product);
    }
}

class program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        
     obj.ProductOfDigits(234);
    }
}

/*
 * Time Complexity : O(N)
 */
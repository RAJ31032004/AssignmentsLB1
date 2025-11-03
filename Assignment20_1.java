import java.lang.*;                               // To import java language

////////////////////////////////////////////////////////////////////////////
//  Function Name :     SumEvenNumbers
//  Description :       To calculate the sum of even numbers.
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              2/11/2025
///////////////////////////////////////////////////////////////////////////////


class Logic
{
    void SumEvenNumbers(int n)
    {
       
        int sum = 0;                            // Initialize a variable to store the total sum

        for (int i = 2; i <= n; i += 2)         // Loop from the first even number (2) up to n.
        {
            sum = sum + i;                      // Add the current even number 'i' to the sum
        }
        System.out.println("The sum of even numbers up to " + n + " is: " + sum);
    }

}

class program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
    
        obj.SumEvenNumbers(10); 
    }
}

/*
 * Time Complexity : O(N)
 */
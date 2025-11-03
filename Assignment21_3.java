import java.lang.*;                               // To import java language

////////////////////////////////////////////////////////////////////////////
//  Function Name :     DisplayFactors
//  Description :       To display the factors of number.
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              2/11/2025
//////////////////////////////////////////////////////////////////////////////

class Logic
{
    void DisplayFactors(int num)
    {
        
        if (num <= 0)                                           // Handle cases where the number is 0 or negative
        {
            System.out.println("Please enter a positive number.");
            return; 
        }

        System.out.print("Factors of " + num + " are: ");      // Use print() to stay on the same line

        for (int i = 1; i <= num; i++) 
        {
            if (num % i == 0)                                // Check if 'i' divides 'num' with zero remainder
            {
                System.out.print(i + " ");                  // If it does, 'i' is a factor. 
            }
        }

        System.out.println();
    }
}

class program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.DisplayFactors(12);

    }
}
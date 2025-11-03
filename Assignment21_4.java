////////////////////////////////////////////////////////////////////////////
//  Function Name :     CountFactors
//  Description :       To count factors of numbers
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              2/11/2025
//////////////////////////////////////////////////////////////////////////////


class Logic
{
    void CountFactors(int num)
    {
        if (num <= 0)
        {
            System.out.println("Please enter a positive number.");
            return; 
        }

        int count = 0;

        for (int i = 1; i <= num; i++) 
        {
            
            if (num % i == 0)               // Check if 'i' divides 'num' with zero remainder
            {
                count++;                    // If it is a factor, increment the counte
            }
        }

        System.out.println("Total number of factors for " + num + " is: " + count);
    }
}

class program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        
        obj.CountFactors(20);

    }
}

/*
 * time complexity :O(N)
 */
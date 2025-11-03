////////////////////////////////////////////////////////////////////////////
//  Function Name :     CountEvenOddRange
//  Description :       To check the even odd range
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              2/11/2025
//////////////////////////////////////////////////////////////////////////////

class Logic
{
    void countEvenOddRange(int n)
    {
        int evenCount = 0;
        int oddCount = 0;

        for (int i = 1; i <= n; i++)
        {
           
            if (i % 2 == 0)                              // Check if the current number 'i' is even
            {
                evenCount++;                            // Increment even counter
            }
            else
            {
                
                oddCount++;                             // Increment odd counter
            }
        }

        System.out.println("Numbers from 1 to " + n + ":");
        System.out.println("Total Even numbers: " + evenCount);
        System.out.println("Total Odd numbers: " + oddCount);
    }
}

class program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        
        obj.countEvenOddRange(50);
    }
}

/*
 * Time Complexity : O(N)
 */
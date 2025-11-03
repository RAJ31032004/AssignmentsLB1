
////////////////////////////////////////////////////////////////////////////
//  Function Name :     PrintDivisibleBy2and3
//  Description :       To display the numbers divisble by 2 and 3
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              2/11/2025
//////////////////////////////////////////////////////////////////////////////

class Logic
{
    void PrintDivisibleBy2and3(int n)
    {
        System.out.println("Numbers divisible by both 2 and 3 (up to " + n + "):");

       
        for (int i = 1; i <= n; i++)             // Loop from 1 up to n
        {
            
            if ((i % 2 == 0) && (i % 3 == 0))   // Check if 'i' is divisible by 2 AND 'i' is divisible by 
            {
                
                System.out.println(i);          // If both are true, print the number
            }
        }
    }
}

class program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        
        obj.PrintDivisbleBy2and3(30);
    }
}

/*
 * Time Complexity : O(N)
 */
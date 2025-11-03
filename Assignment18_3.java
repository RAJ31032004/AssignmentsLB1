import java.lang.*;                                                   // To import java language

////////////////////////////////////////////////////////////////////////////
//  Function Name :     CheckPrime
//  Description :       To check a Prime Number.
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              27/10/2025
///////////////////////////////////////////////////////////////////////////////

class Logic {
    void PrintOddNumbers(int n) {
        System.out.println("Odd numbers up to " + n + ":");

        for (int i = 1; i <= n; i += 2) {                               // Start the loop at 1 and increment by 2

            System.out.print(i + " ");                                   // Print the odd number followed by a space
        }

        System.out.println();
    }
}

class program {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.PrintOddNumbers(20); 
    }
}

/*
 * Time Complexity : O(N)
 */
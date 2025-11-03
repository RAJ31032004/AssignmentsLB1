import java.lang.*;                      // import java language

//////////////////////////////////////////////////////////////////////////////
//  Function Name :     PrintEvenNumbers
//  Description :       To print the even numbers 
//  Input :             Integer
//  Output :            Integer 
//  Author :            Raj Samir Jadhav
//  Date :              27/10/2025
///////////////////////////////////////////////////////////////////////////////

class Logic {
    void PrintEvenNumbers(int n) {
        System.out.println("Even numbers up to " + n + ":");

        for (int i = 2; i <= n; i += 2) {                                       // Start the loop at 2 and increment by 2

            System.out.print(i + " ");                                          // Print the even number followed by a space
        }

        System.out.println();
    }
}

class program {
    public static void main(String args[]) {
        Logic obj = new Logic();

        obj.PrintEvenNumbers(20);                                               // Call the method with n = 20
    }
}

/*
 *  Time Complexity : O(N)
 */
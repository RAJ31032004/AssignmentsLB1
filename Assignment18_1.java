import java.lang.*;                                       // To import java language

////////////////////////////////////////////////////////////////////////////
//  Function Name :     CheckPrime
//  Description :       To check a Prime Number.
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              27/10/2025
///////////////////////////////////////////////////////////////////////////////

class Logic {
    void CheckPrime(int num) {

        boolean isPrime = true;

       
        if (num <= 1) {                                    // Handle edge cases: 0, 1, and negative numbers are not prime.
            isPrime = false;
        } else {
            
            for (int i = 2; i * i <= num; i++) {           // If num is divisible by any 'i', it's not prime.
                
                if (num % i == 0) {
                    isPrime = false;                       // Set the flag to false
                    break;                                 // Exit the loop as we've found a divisor
                }
            }
        }

        if (isPrime) {
            System.out.println(num + " is a prime number.");
        } else {
            System.out.println(num + " is not a prime number.");
        }
    }
}

class program {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.CheckPrime(11); 
    }
}

/*
 *   Time Complexity : O(N)
 */
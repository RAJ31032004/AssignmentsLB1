import java.lang.*;                                                                      // To import java language

////////////////////////////////////////////////////////////////////////////
//  Function Name :     CheckPrime
//  Description :       To check a number is divisible or not.
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              27/10/2025
///////////////////////////////////////////////////////////////////////////////

class Logic {
    void CheckDivisible(int num) {
        
        
        if ((num % 5 == 0) && (num % 11 == 0)) {                                                // Check if the remainder is 0 when divided by 5
            System.out.println(num + " is divisible by both 5 and 11.");                        // AND check if the remainder is 0 when divided by 11
        } else {
            System.out.println(num + " is NOT divisible by both 5 and 11.");
        }
        
    }
}

class program {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.CheckDivisible(55); 

    }
}

/*
 *  Time Complexity : O(N) 
 */
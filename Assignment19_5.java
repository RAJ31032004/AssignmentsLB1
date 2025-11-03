import java.lang.*;                                                                      // To import java language

////////////////////////////////////////////////////////////////////////////
//  Function Name :     CalculatePower
//  Description :       To calculate the Power of the value
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              30/10/2025
///////////////////////////////////////////////////////////////////////////////


class Logic {
    
    void CalculatePower(int base, int exp){
        
        long result = 1;

        if (exp < 0) {
            System.out.println("This program only supports non-negative exponents.");
            return;
        }

        if (base == 0 && exp == 0) {
            result = 1;
        } else {
            for (int i = 1; i <= exp; i++) {
                result = result * base;
            }
        }
        
        System.out.println(base + " to the power of " + exp + " is: " + result);
    
    } 
}

class program{
    public static void main(String args[]) {
        Logic obj = new Logic();
        
        obj.CalculatePower(2,5);
    }
}

/*
 *  Time Complexity:   O(N)
 */
import java.lang.*;                                                                      // To import java language

////////////////////////////////////////////////////////////////////////////
//  Function Name :     PrintDigits
//  Description :       To print the digits
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              30/10/2025
///////////////////////////////////////////////////////////////////////////////


class Logic {
    void PrintDigits(int num) {
        
        System.out.println("Digits in the number " + num + ":");

        
        if (num == 0) {                                            // Handle the edge case of 0
            System.out.println(0);
            return; 
        }

        
        if (num < 0) {                                             // Handle negative numbers by working with the absolute value
            num = -num; 
        }

        
        while (num > 0) {                                          // Loop while there are digits left in the number
            
            int digit = num % 10;                                  // Get the last digit
           
            System.out.println(digit);                             // Print the extracted digit
            
            num = num / 10;                                        // Remove the last digit from the number
        }
    }
}

class program {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.PrintDigits(9876);                                   // Call the method
    
    }
}
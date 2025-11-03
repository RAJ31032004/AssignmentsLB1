import java.lang.*;                                        // For input and output

//////////////////////////////////////////////////////////////////////////////
//  Function Name :     SumEvenDigits
//  Description :       To sum the even digits.
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              27/10/2025
///////////////////////////////////////////////////////////////////////////////
/// 
class Logic {
    void SumEvenOddDigits(int num) {

        int evenSum = 0;
        int oddSum = 0;
        int digit = 0;

        int originalNum = num;

        num = Math.abs(num);                                    
        
        if (num == 0) {
            evenSum = 0;                                            // 0 is considered even
        }

                                                                  
        while (num > 0) {                                           // Loop while there are digits left
            
            digit = num % 10;                                       // Get the last digit

                                                                
            if (digit % 2 == 0) {
                evenSum = evenSum + digit;                          // Add to even sum
            } else {
                oddSum = oddSum + digit;                           // Add to odd sum
            }

           
            num = num / 10;                                       //  Remove the last digit
        }

        System.out.println("For the number: " + originalNum);
        System.out.println("Sum of even digits: " + evenSum);
        System.out.println("Sum of odd digits: " + oddSum);
    }
}

class program {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.SumEvenOddDigits(123456);
    }
}
        
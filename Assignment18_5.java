import java.lang.*;                      // import java language

//////////////////////////////////////////////////////////////////////////////
//  Function Name :     CheckSign
//  Description :       To print whether the number is positive,Negative or zero
//  Input :             Integer
//  Output :            Integer 
//  Author :            Raj Samir Jadhav
//  Date :              27/10/2025
///////////////////////////////////////////////////////////////////////////////


class Logic {
    void CheckSign(int num) {
       
        if (num > 0) {
            System.out.println(num + " is a positive number.");                     // Check if the number is greater than 0

        }
        else if (num < 0) {
            System.out.println(num + " is a negative number.");                    // If not positive, check if it's less than 0

        }
        
        else {
            System.out.println("The number is zero.");                           //  If it's neither, it must be 0
        }
        
    }
}

class program {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.CheckSign(-8); 
    }
}

/*
 * Time Complexity : O(N)
 */
import java.lang.*;                                 // java language import

///////////////////////////////////////////////////////////////////////////////
//    Function Name :       CalculateSum
//    Description :         To Calculate sum of N natural numbers
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                25/10/2025
///////////////////////////////////////////////////////////////////////////////

class Logic {
    void CalculateSum(int n) {
        
        int iSum = 0;                                     // Initialize sum to 0
        int i = 0;                                        // Loop counter

        if(n <= 0) {
            System.out.println("Please enter a positive natural number.");              // Handle cases where n is zero or negative
            return;
        }
        
        for(i = 1; i <= n; i++) {
            iSum = iSum + i; 
        }

        
        System.out.println("Sum of first " + n + " natural numbers is: " + iSum);         // Print the final result
        
    }
}

class program {
    public static void main(String args[]) {
        Logic obj = new Logic();
        
        obj.CalculateSum(10);
    }
}
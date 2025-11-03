import java.lang.*;                                        // For input and output

////////////////////////////////////////////////////////////////////////////
//  Function Name :     PrintTable
//  Description :       To print Table
//  Input :             Integer
//  Output :            (Prints the result)
//  Author :            Raj Samir Jadhav
//  Date :              27/10/2025
///////////////////////////////////////////////////////////////////////////////

class Logic {
    void PrintTable(int num) {
        System.out.println("Multiplication table for " + num + ":");

       
        for (int i = 1; i <= 10; i++) {                                            // Loop from 1 to 10
            
            System.out.println(num + " x " + i + " = " + (num * i));               // Print the calculation in the format: num x i = (num * i)
        }
    }    
}

class program {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.PrintTable(5);                                                     // Call the method with the number 5
    }
}

/*
 *  Time Complexity : O(N)
 */
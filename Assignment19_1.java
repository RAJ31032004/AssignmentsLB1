import java.lang.*;                      // import java language

//////////////////////////////////////////////////////////////////////////////
//  Function Name :     CheckLeapYears
//  Description :       To cheeck the leap years
//  Input :             Integer
//  Output :            Its leap year or not
//  Author :            Raj Samir Jadhav
//  Date :              27/10/2025
///////////////////////////////////////////////////////////////////////////////

class Logic {
    void CheckLeapYear(int year) {
        
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {           // The condition for a leap year is:
                                                                                    // (divisible by 4 AND not divisible by 100) OR (divisible by 400)
            System.out.println(year + " is a leap year.");
        } else {
            System.out.println(year + " is not a leap year.");
        }
        
    }
}

class program {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.CheckLeapYear(2024);                                               
        
    }
}
/*
 *  Time Complexity : O(N)
 */
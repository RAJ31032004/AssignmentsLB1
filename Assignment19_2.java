import java.lang.*;                                        // For input and output

//////////////////////////////////////////////////////////////////////////////
//  Function Name :     DisplayGrade
//  Description :       To display the grade
//  Input :             Integer
//  Output :            prints the grade acccording to the marks
//  Author :            Raj Samir Jadhav
//  Date :              27/10/2025
///////////////////////////////////////////////////////////////////////////////

class Logic {
    void DisplayGrade(int marks) {

                                                               
        if (marks < 0 || marks > 100) {                                          //  check for invalid marks
            System.out.println("Invalid marks: " + marks + ". Marks must be between 0 and 100.");
        }
                                                                        
        else if (marks >= 90) {                                                  // Use an if-else if chain to determine the grade
            System.out.println("Marks: " + marks + " -> Grade: A");
        } 
        else if (marks >= 80) {                                                  // 80 to 89
            System.out.println("Marks: " + marks + " -> Grade: B");
        } 
        else if (marks >= 70) {                                                 // 70 to 79
            System.out.println("Marks: " + marks + " -> Grade: C");
        } 
        else if (marks >= 60) {                                                 // 60 to 69
            System.out.println("Marks: " + marks + " -> Grade: D");
        } 
        else {                                                                  // Below 60
            System.out.println("Marks: " + marks + " -> Grade: F (Fail)");
        }
        
    }
}

class program {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.DisplayGrade(82); 
    }
}
/*
 * Time Complexity : O(N)
 */
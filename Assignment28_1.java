import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         To get the pattern.
//    Input :               Integer
//    Output :              print the pattern
//    Author :              Raj Samir Jadhav
//    Date :                21/11/2025
////////////////////////////////////////////////////////////////
/// 
class Pattern
{
    
    public void display(int iRow, int iCol)                                 // Method to display the pattern
    {
        for(int i = 1; i <= iRow; i++)                                     // Loop for rows
        {
            for(int j = 1; j <= iCol; j++)                               // Loop for columns
            {
                System.out.print((char)('A' + j - 1) + "\t");           // Print A B C D...
            }
            System.out.println();
        }
    }
}

public class Main
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows and columns:");
        int iValue1 = sobj.nextInt();
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.display(iValue1, iValue2);                                    // Method call
    }
}

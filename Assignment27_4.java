import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         To get the pattern.
//    Input :               Integer
//    Output :              print the pattern
//    Author :              Raj Samir Jadhav
//    Date :                21/11/2025
////////////////////////////////////////////////////////////////




class Pattern                                         // Class containing the logic
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 1; i <= iRow; i++)                    // Outer loop → rows
        {
            for(j = 1; j <= iCol; j++)               // Inner loop → columns
            {
                if(i == j)                           // Check diagonal
                {
                    System.out.print("*\t");         // Print star at diagonal
                }
                else
                {
                    System.out.print("#\t");         // Print # elsewhere
                }
            }
            System.out.println();                   // New line
        }
    }
}


class Assignment27_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();                    // Create object
        pobj.Display(iValue1, iValue2);                  // Call pattern function
    }
}

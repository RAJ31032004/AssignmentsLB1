import java.util.Scanner;

///////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : Display pattern of various character.
// Input         : Integer (Rows, Columns)
// Output        : Pattern printed on screen
// Author        : Raj Samir Jadhav
// Date          : 25/11/2025
///////////////////////////////////////////////////////////////

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        for(int i = 1; i <= iRow; i++)           // Rows
        {
            for(int j = 1; j <= iCol; j++)       // Columns
            {
                if(i == 1 || i == iRow || j == 1 || j == iCol)
                {
                    System.out.print("*\t");     // Border
                }
                else if(i < j && i + j < iCol + 1)
                {
                    System.out.print("#\t");     // Upperleft
                }
                else if(i > j && i + j > iCol + 1)
                {
                    System.out.print("$\t");     // Lowerright
                }
                else
                {
                    System.out.print("*\t");     // Center cross region
                }
            }
            System.out.println();
        }
    }
}

class AssignmentPattern
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns:");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);          // Method call
    }
}

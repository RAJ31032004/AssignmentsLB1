import java.util.Scanner;

///////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : Display  diagonal
// Input         : Integer (Rows, Columns)
// Output        : Pattern display
// Author        : Raj Samir Jadhav
// Date          : 25/11/2025
///////////////////////////////////////////////////////////////

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        for(int i = 1; i <= iRow; i++)          // Rows
        {
            for(int j = 1; j <= iCol; j++)      // Columns
            {
                if(i == 1 || i == iRow)         // First or last row
                {
                    System.out.print("*\t");
                }
                else if(j == 1 || j == 2 || j == iCol || j == iCol - 1)
                {
                    System.out.print("*\t");     // First 2 or last 2 columns
                }
                else if(i == j || j == (iCol - i + 1))
                {
                    System.out.print("*\t");     // Diagonals
                }
                else
                {
                    System.out.print("\t");      // Blank space
                }
            }
            System.out.println();
        }
    }
}

class Assignment32_3
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns:");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);
    }
}

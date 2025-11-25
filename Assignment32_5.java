import java.util.Scanner;

//////////////////////////////////////////////////////////////
// Function Name : Pattern
// Description   : Display  diagonal pattern
// Input         : Integer (Rows, Columns)
// Output        : Pattern display
// Author        : Raj Samir Jadhav
// Date          : 26/11/2025
//////////////////////////////////////////////////////////////

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        for(int i = 1; i <= iRow; i++)
        {
            for(int j = 1; j <= iCol + 1; j++)
            {
                if(i == 1 || i == iRow)        // First or last row
                {
                    System.out.print(j + "\t");
                }
                else if(j == 1)                // First column
                {
                    System.out.print("1\t");
                }
                else if(j == 2)                // Second column
                {
                    System.out.print("2\t");
                }
                else if(j == iCol + 1)         // Last column
                {
                    System.out.print("5\t");
                }
                else if(i == j)                // Diagonal
                {
                    System.out.print(i + "\t");
                }
                else
                {
                    System.out.print("\t");     // Blank
                }
            }
            System.out.println();
        }
    }
}

class Assignment32_5
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

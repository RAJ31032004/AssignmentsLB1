import java.util.Scanner;

///////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Display pattern of $ and *
//  Input         : Integer (Rows, Columns)
//  Output        : Pattern printed on screen
//  Author        : Raj Samir Jadhav
//  Date          : 26/11/2025
///////////////////////////////////////////////////////////////

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        for(int i = 1; i <= iRow; i++)
        {
            for(int j = 1; j <= iCol; j++)
            {
                if(j <= i)                        // Print $ when column <= row
                {
                    System.out.print("$\t");
                }
                else                              // Otherwise print *
                {
                    System.out.print("*\t");
                }
            }

            System.out.println();                 // Move to next line
        }
    }
}

class Assignment30_3
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);     // Method call
    }
}

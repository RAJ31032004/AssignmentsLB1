import java.util.Scanner;

///////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Displays special * and @ pattern
//  Input         : Integer (Rows, Columns)
//  Output        : Pattern printed on screen
//  Author        : Raj Samir Jadhav
//  Date          : 26/11/2025
///////////////////////////////////////////////////////////////

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        for(int i = 1; i <= iRow; i++)           // Rows
        {
            for(int j = 1; j <= iCol; j++)       // Columns
            {
                if(i == 3 || i == 4)             // Rows 3 and 4 → all @
                {
                    System.out.print("@\t");
                }
                else if((i == 1 || i == 2 || i == 6) && j == 3) // Rows 1,2,6 → only column 3 is @
                {
                    System.out.print("@\t");
                }
                else if(i == 5 && (j == 2 || j == 3 || j == 4)) // Rows 1,2,6 → only column 3 is @
                {
                    System.out.print("@\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }
    }
}

class Assignment30_4
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
        pobj.Display(iValue1, iValue2);
    }
}

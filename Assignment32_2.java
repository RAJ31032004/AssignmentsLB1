import java.util.Scanner;

///////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Display special pattern (* , # , @)
//  Input         : Integer (Rows, Columns)
//  Output        : 
//      *   *   *   #
//      *   *   #   @
//      *   #   @   @
//      #   @   @   @
//  Author        : Raj Samir Jadhav
//  Date          : 25/11/2025
///////////////////////////////////////////////////////////////

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        for(int i = 1; i <= iRow; i++)
        {
            for(int j = 1; j <= iCol; j++)
            {
                if(i == j)                 // Main diagonal
                {
                    System.out.print("#\t");
                }
                else if(i < j)             // Upper-right area
                {
                    System.out.print("*\t");
                }
                else                       // Lower-left area
                {
                    System.out.print("@\t");
                }
            }
            System.out.println();
        }
    }
}

class Assignment32_2
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

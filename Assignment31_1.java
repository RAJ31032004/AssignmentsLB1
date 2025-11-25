import java.util.Scanner;

///////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Display mixed number and star pattern
//  Input         : Integer (Rows, Columns)
//  Output        : Pattern printed on screen
//  Author        : Raj Samir Jadhav
//  Date          : 25/11/2025
///////////////////////////////////////////////////////////////

class Pattern
{
    public void Display(int iRow)
    {
        for(int i = 1; i <= iRow; i++)        // Rows
        {
            for(int j = 1; j <= i; j++)       // Print stars
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}

class Assignment31_1
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter number of rows : ");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);
    }
}

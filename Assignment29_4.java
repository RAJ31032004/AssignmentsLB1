import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         Print positive numbers on odd rows and
//                          negative numbers on even rows.
//    Input :               Integer
//    Output :              Pattern printed on screen
//    Author :              Raj Samir Jadhav
//    Date :                25/11/2025
////////////////////////////////////////////////////////////////////////////

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        for(int i = 1; i <= iRow; i++)            // Loop for rows
        {
            if(i % 2 == 1)                        // Odd rows → positive numbers
            {
                for(int j = 1; j <= iCol; j++)
                {
                    System.out.print(j + "\t");   // Print 1 2 3 4 5
                }
            }
            else                                   // Even rows → negative numbers
            {
                for(int j = 1; j <= iCol; j++)
                {
                    System.out.print(-j + "\t");  // Print -1 -2 -3 -4 -5
                }
            }

            System.out.println();
        }
    }
}

class Assignment29_4
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
        pobj.Display(iValue1, iValue2);           // Method call
    }
}

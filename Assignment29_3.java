import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         Display alphabets on odd rows and numbers on even rows
//    Input :               Integer
//    Output :              Prints the pattern
//    Author :              Raj Samir Jadhav
//    Date :                25/11/2025
////////////////////////////////////////////////////////////////////////////

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        for(int i = 1; i <= iRow; i++)               // Loop for rows
        {
            if(i % 2 == 1)                           // Odd rows alphabets
            {
                for(int j = 1; j <= iCol; j++)
                {
                    System.out.print((char)('a' + j - 1) + "\t");
                }
            }
            else                                      // Even rows numbers
            {
                for(int j = 1; j <= iCol; j++)
                {
                    System.out.print(j + "\t");
                }
            }

            System.out.println();                    // Move to next row
        }
    }
}

class Assignment29_3
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
        pobj.Display(iValue1, iValue2);              // Method call
    }
}

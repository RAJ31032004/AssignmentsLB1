import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         To display the character pattern.
//    Input :               Integer
//    Output :              Prints the pattern
//    Author :              Raj Samir Jadhav
//    Date :                24/11/2025
////////////////////////////////////////////////////////////////////////////

class Pattern
{
    public void Display(int iRow, int iCol)          // Method to print pattern
    {
        for(int i = 1; i <= iRow; i++)               // Loop for rows
        {
            for(int j = 1; j <= iCol; j++)           // Loop for columns
            {
                System.out.print((char)('A' + i - 1) + "\t");  
            }
            System.out.println();
        }
    }
}

class Assignment28_3
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
        pobj.Display(iValue1, iValue2);               // Method call
    }
}

import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         To print the required alphabet pattern.
//    Input :               Integer
//    Output :              Prints the pattern
//    Author :              Raj Samir Jadhav
//    Date :                24/11/2025
////////////////////////////////////////////////////////////////////////////

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;

        for(i = 1; i <= iRow; i++)               // Loop for rows
        {
            for(j = 1; j <= iCol; j++)           // Loop for columns
            {
                if(i % 2 == 1)                   // Odd row → Uppercase
                {
                    System.out.print((char)('A' + j - 1) + "\t");
                }
                else                              // Even row → Lowercase
                {
                    System.out.print((char)('a' + j - 1) + "\t");
                }
            }
            System.out.println();
        }
    }
}

class Assignment28_2
{
    public static void main(String A[])
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

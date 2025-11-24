import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         Display alternating even–odd row pattern
//    Input :               Integer
//    Output :              Prints the pattern
//    Author :              Raj Samir Jadhav
//    Date :                25/11/2025
////////////////////////////////////////////////////////////////////////////

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        for(int i = 1; i <= iRow; i++)                // Loop for rows
        {
            if(i % 2 == 1)                            // Odd row → Even numbers
            {
                int even = 2;

                for(int j = 1; j <= iCol; j++)        // Loop for columns
                {
                    System.out.print(even + "\t");
                    even += 2;
                }
            }
            else                                       // Even row → Odd numbers
            {
                int odd = 1;

                for(int j = 1; j <= iCol; j++)
                {
                    System.out.print(odd + "\t");
                    odd += 2;
                }
            }
            System.out.println();
        }
    }
}

class Assignment29_2
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

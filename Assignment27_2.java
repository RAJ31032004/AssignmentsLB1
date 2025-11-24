import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         To get the pattern.
//    Input :               Integer
//    Output :              print the pattern
//    Author :              Raj Samir Jadhav
//    Date :                21/11/2025
///////////////////////////////////////////////////////////////


class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(j + "\t");
            }
            System.out.println();
        }
    }
}

class Assignment27_2
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

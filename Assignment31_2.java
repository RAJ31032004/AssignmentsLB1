import java.util.Scanner;

//////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Display decreasing star triangle
//  Input         : Integer (Rows)
//  Output        : *****
//                  ****
//                  ***
//                  **
//                  *
//  Author        : Raj Samir Jadhav
//  Date          : 25/11/2025
///////////////////////////////////////////////////////////////

class Pattern
{
    public void Display(int iRow)
    {
        for(int i = iRow; i >= 1; i--)     // Start with max stars
        {
            for(int j = 1; j <= i; j++)    // Print stars
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}

class Assignment31_2
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

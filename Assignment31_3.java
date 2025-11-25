import java.util.Scanner;

///////////////////////////////////////////////////////////////
//  Function Name : Pattern
//  Description   : Display diagonal based pattern
//  Input         : Integer 
//  Output        : $   *   *   *   *
//                  #   $   *   *   *
//                  #   #   $   *   *
//                  #   #   #   $   *
//                  #   #   #   #   $
//
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
                if(i == j)               // Diagonal
                {
                    System.out.print("$\t");
                }
                else if(j < i)           // Left side
                {
                    System.out.print("#\t");
                }
                else                     // Right side
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }
    }
}

class Assignment31_3
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows and columns : ");
        iValue1 = sobj.nextInt();
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);
    }
}

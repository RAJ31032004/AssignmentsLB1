import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : Mult
// Description   : Return product of digits using recursion
// Input         : Integer
// Output        : Product of digits
// Author        : Raj Samir Jadhav
// Date          : 06/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    int Mult(int iNo)
    {
        if(iNo == 0)
        {
            return 1;                            // Base result for recursion
        }
        else
        {
            return (iNo % 10) * Mult(iNo / 10);  // Recursive call
        }
    }
}

class Assignment41_5
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number : ");
        int value = sobj.nextInt();

        Pattern pobj = new Pattern();
        int result = pobj.Mult(value);

        System.out.println(result);

        sobj.close();
    }
}

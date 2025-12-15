import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display numbers with star recursively from N to 1
// Input         : Integer (iNo)
// Output        : N  *  ...  1  *
// Author        : Raj Samir Jadhav
// Date          : 06/12/2025
///////////////////////////////////////////////////////////////////////////////

class Pattern
{
    void Display(int iNo)
    {
        if(iNo > 0)
        {
            System.out.print(iNo + "  *  ");
            Display(iNo - 1);                    // Recursive call
        }
    }
}

class Assignment41_1
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number : ");
        int value = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(value);

        sobj.close();
    }
}

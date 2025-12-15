import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display first N capital alphabets using recursion
// Input         : Integer
// Output        : A  B  C  D  E  F
// Author        : Raj Samir Jadhav
// Date          : 05/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    char ch = 'A';

    void Display(int iNo)
    {
        if(iNo > 0)
        {
            System.out.print(ch + "  ");
            ch++;
            Display(iNo - 1);              // Recursive call
        }
    }
}

class Assignment40_4
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

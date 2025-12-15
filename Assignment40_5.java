import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display first N lowercase letters using recursion
// Input         : Integer (iNo)
// Output        : a  b  c  d  e  f
// Author        : Raj Samir Jadhav
// Date          : 05/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    char ch = 'a';

    void Display(int iNo)
    {
        if(iNo > 0)
        {
            System.out.print(ch + "  ");
            ch++;
            Display(iNo - 1);  // Recursive call
        }
    }
}

class Assignment40_5
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

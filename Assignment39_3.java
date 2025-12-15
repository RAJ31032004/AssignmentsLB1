///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display numbers from 5 to 1 using recursion
// Input         : ---
// Output        : 5  4  3  2  1
// Author        : Raj Samir Jadhav
// Date          : 03/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    static int i = 5;

    void Display()
    {
        if(i >= 1)
        {
            System.out.print(i + "  ");
            i--;
            Display();                    // Recursive call
        }
    }
}

class Assignment39_3
{
    public static void main(String[] args)
    {
        Pattern obj = new Pattern();
        obj.Display();
    }
}

///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display numbers from 1 to 5 using recursion
// Input         : ---
// Output        : 1  2  3  4  5
// Author        : Raj Samir Jadhav
// Date          : 03/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    static int i = 1;

    void Display()
    {
        if(i <= 5)
        {
            System.out.print(i + "  ");
            i++;
            Display();        // Recursive call
        }
    }
}

class Assignment39_2
{
    public static void main(String[] args)
    {
        Pattern obj = new Pattern();
        obj.Display();
    }
}

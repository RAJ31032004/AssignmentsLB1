///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display stars using recursion
// Input         : ---
// Output        : *  *  *  *  *  *
// Author        : Raj Samir Jadhav
// Date          : 07/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    static int i = 0;

    void Display()
    {
        if(i < 6)
        {
            System.out.print("*  ");
            i++;
            Display();            // Recursive call
        }
    }
}

class Assignment39_1
{
    public static void main(String[] args)
    {
        Pattern obj = new Pattern();
        obj.Display();
    }
}

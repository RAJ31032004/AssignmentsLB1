///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display lowercase characters from a to f using recursion
// Input         : ---
// Output        : a  b  c  d  e  f
// Author        : Raj Samir Jadhav
// Date          : 03/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    static char ch = 'a';

    void Display()
    {
        if(ch <= 'f')
        {
            System.out.print(ch + "  ");
            ch++;
            Display();            // Recursive call
        }
    }
}

class Assignment39_5
{
    public static void main(String[] args)
    {
        Pattern obj = new Pattern();
        obj.Display();
    }
}

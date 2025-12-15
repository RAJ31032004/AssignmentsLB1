///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display characters from A to F using recursion
// Input         : ---
// Output        : A  B  C  D  E  F
// Author        : Raj Samir Jadhav
// Date          : 03/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    static char ch = 'A';

    void Display()
    {
        if(ch <= 'F')
        {
            System.out.print(ch + "  ");
            ch++;
            Display();               // Recursive call
        }
    }
}

class Assignment39_4
{
    public static void main(String[] args)
    {
        Pattern pobj = new Pattern();
        pobj.Display();
    }
}

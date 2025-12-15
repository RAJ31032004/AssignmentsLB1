import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : If character is capital, print till 'Z'.
//                 If character is small, print till 'a' in reverse.
//                 Otherwise return directly.
// Input         : Character
// Output        : Character sequence
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public void Display(char ch)
    {
        if(ch >= 'A' && ch <= 'Z')                      // Capital letters
        {
            for(char i = ch; i <= 'Z'; i++)
            {
                System.out.print(i + " ");
            }
            System.out.println();
        }
        else if(ch >= 'a' && ch <= 'z')                 // Small letters
        {
            for(char i = ch; i >= 'a'; i--)
            {
                System.out.print(i + " ");
            }
            System.out.println();
        }
        else
        {
            return;                                    // No output for non-letters
        }
    }
}

class Assignment34_3
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the character : ");      // Taaake input from user
        char cValue = sobj.next().charAt(0);

        Pattern pobj = new Pattern();
        pobj.Display(cValue);                             // Function Call
    }
}

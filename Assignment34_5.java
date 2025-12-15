import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Displays ASCII value of character in Decimal, Octal & Hex
// Input         : Character
// Output        : Number system representations
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public void Display(char ch)
    {
        int iAscii = (int)ch;                                    // Store ASCII in integer

        System.out.println("Decimal      : " + iAscii);          // Decimal
        System.out.printf("Octal        : %o\n", iAscii);        // Octal
        System.out.printf("Hexadecimal  : 0x%X\n", iAscii);      // Hexadecimal
    }
}

class Assignment34_5
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the character : ");                  // Takes input from user
        char cValue = sobj.next().charAt(0);

        Pattern pobj = new Pattern();
        pobj.Display(cValue);                                         // Function Call
    }
}

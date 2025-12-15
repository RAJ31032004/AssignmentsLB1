import java.util.Scanner;

//////////////////////////////////////////////////////////////
// Function Name : DisplayASCII
// Description   : Display ASCII table (Symbol, Decimal,
//                 Hexadecimal, Octal) from 0 to 255
// Input         : No Input
// Output        : ASCII Table Display
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
//////////////////////////////////////////////////////////////

class Pattern
{
    public void DisplayASCII()
    {
        System.out.println("Symbol\tDecimal\tHex\tOctal");                          // Table Heading
        System.out.println("--------------------------------------------");
        
        for(int i = 0; i <= 255; i++)                                               // Display ASCII values 0 to 255
        {
            if(i >= 32 && i <= 126)                                                 // Printable characters range (32 to 126)
            {
                System.out.printf("%c\t%d\t%X\t%o\n", (char)i, i, i, i);
            }
            else
            {
                System.out.printf(".\t%d\t%X\t%o\n", i, i, i);                       // Non-printable characters replaced with dot
            }
        }
    }
}

class Assignment34_1
{
    public static void main(String[] args)
    {
        
        Pattern pobj = new Pattern();                                               // Object creation

        
        pobj.DisplayASCII();                                                        // Function call
    }
}

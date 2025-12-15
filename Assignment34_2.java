import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Convert uppercase to lowercase & lowercase to uppercase.
// Input         : Character
// Output        : Converted character or same for non-alphabet
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public void Display(char ch)
    {
        if(ch >= 'A' && ch <= 'Z')                                          // Check for uppercase A-Z
        {
            ch = (char)(ch + 32);                                           // Convert to lowercase
        }
        
        else if(ch >= 'a' && ch <= 'z')                                     // Check for lowercase a-z
        {
            ch = (char)(ch - 32);                                            // Convert to uppercase
        }
        System.out.println("Output : " + ch);
    }
}

class Assignment34_2
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the character : ");
        char cValue = sobj.next().charAt(0);                                  // Read single character

        Pattern pobj = new Pattern();
        pobj.Display(cValue);
    }
}

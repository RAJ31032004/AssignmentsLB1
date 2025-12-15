import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : ChkDigit
// Description   : Check whether given character is digit (0-9)
// Input         : Character
// Output        : TRUE / FALSE (boolean)
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public boolean ChkDigit(char ch)                      
    {
        if(ch >= '0' && ch <= '9')                                   // Check whether given character is digit 
            return true;
        else
            return false;
    }
}

class Assignment34_3
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the character : ");             // Takes input
        char cValue = sobj.next().charAt(0);

        Pattern pobj = new Pattern();
        boolean bRet = pobj.ChkDigit(cValue);

        if(bRet == true)
            System.out.println("It is Digit");                   // prints if its Digit
        else
            System.out.println("It is not a Digit");             // Prints if its not a digit
    }
}

import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : ChkCapital
// Description   : Check whether entered character is capital letter (A-Z)
// Input         : Character
// Output        : boolean TRUE / FALSE
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public boolean ChkCapital(char ch)
    {
        if(ch >= 'A' && ch <= 'Z')                        // Check A to Z
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Assignment33_2
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the character : ");                       // Take input from user
        char cValue = sobj.next().charAt(0);

        Pattern pobj = new Pattern();
        boolean bRet = pobj.ChkCapital(cValue);

        if(bRet == true)
        {
            System.out.println("It is Capital Character");                    // Displays its capital Character
        }
        else
        {
            System.out.println("It is not a Capital Character");             // Displays if Character is not Capital
        }
    }
}

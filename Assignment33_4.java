import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : ChkSmall
// Description   : Check whether entered character is small case (a-z)
// Input         : Character
// Output        : boolean TRUE / FALSE
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public boolean ChkSmall(char ch)
    {
        if(ch >= 'a' && ch <= 'z')            // To check small letters
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Assignment34_4
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the character : ");       // Takes input from user
        char cValue = sobj.next().charAt(0);

        Pattern pobj = new Pattern();
        boolean bRet = pobj.ChkSmall(cValue);              // Function Call

        if(bRet == true)
        {
            System.out.println("It is Small case Character");   // Displays if character is small
        }
        else
        {
            System.out.println("It is not a Small case Character");    // Displays if character is not small
        }
    }
}

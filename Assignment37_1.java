import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : ChkChar
// Description   : Check whether given character is present in string or not
// Input         : String, Character
// Output        : TRUE / FALSE
// Author        : Raj Samir Jadhav
// Date          : 01/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public boolean ChkChar(String str, char ch)
    {
        for(int i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) == ch)      // Match found
            {
                return true;
            }
        }
        return false;                    // Not found
    }
}

class Assignment37_1
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String input = sobj.nextLine();

        System.out.println("Enter the character : ");
        char cValue = sobj.next().charAt(0);

        Pattern pobj = new Pattern();
        boolean bRet = pobj.ChkChar(input, cValue);

        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }

        sobj.close();
    }
}

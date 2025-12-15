import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : ChkSpecial
// Description   : Check if character is special symbol (!,@,#,$,%,^,&,*)
// Input         : Character
// Output        : TRUE or FALSE
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public boolean ChkSpecial(char ch)                                          // Functiaon
    {
        if(ch == '!' || ch == '@' || ch == '#' || ch == '$' ||                   // Special Character
           ch == '%' || ch == '^' || ch == '&' || ch == '*')
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

        System.out.println("Enter the character : ");
        char cValue = sobj.next().charAt(0);

        Pattern pobj = new Pattern();
        boolean bRet = pobj.ChkSpecial(cValue);

        if(bRet == true)
        { 
            System.out.println("It is a special character");                       // Prints if Character is Special
        }
        else
        {
            System.out.println("It is not a special character");                    // Prints if character is not special
        }
    }
}

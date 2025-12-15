import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : StrCpyCap
// Description   : Copy characters into new string by converting
//                 small case letters into upper case
// Input         : String
// Output        : Capitalized string
// Author        : Raj Samir Jadhav
// Date          : 02/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public String StrCpyCap(String src)
    {
        String dest = "";

        for(int i = 0; i < src.length(); i++)
        {
            char ch = src.charAt(i);

            if(ch >= 'a' && ch <= 'z')       // Small to capital
            {
                ch = (char)(ch - 32);
            }

            dest = dest + ch;
        }

        return dest;
    }
}

class Assignment38_3
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String input = sobj.nextLine();

        Pattern pobj = new Pattern();
        String output = pobj.StrCpyCap(input);

        System.out.println(output);

        sobj.close();
    }
}

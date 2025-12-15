import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : StrCpyToggle
// Description   : Toggle case while copying string
// Input         : String
// Output        : Modified string with toggled case
// Author        : Raj Samir Jadhav
// Date          : 02/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public String StrCpyToggle(String src)
    {
        String dest = "";

        for(int i = 0; i < src.length(); i++)
        {
            char ch = src.charAt(i);

            if(ch >= 'A' && ch <= 'Z')        // Capital to Small
            {
                ch = (char)(ch + 32);
            }
            else if(ch >= 'a' && ch <= 'z')   // Small to Capital
            {
                ch = (char)(ch - 32);
            }

            dest = dest + ch;
        }
        return dest;
    }
}

class Assignment38_5
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String input = sobj.nextLine();

        Pattern pobj = new Pattern();
        String output = pobj.StrCpyToggle(input);

        System.out.println(output);

        sobj.close();
    }
}

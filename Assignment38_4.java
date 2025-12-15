import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : StrCpySmall
// Description   : Convert capital characters to small and copy the string
// Input         : String
// Output        : Lowercase string
// Author        : Raj Samir Jadhav
// Date          : 02/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public String StrCpySmall(String src)
    {
        String dest = "";

        for(int i = 0; i < src.length(); i++)
        {
            char ch = src.charAt(i);

            if(ch >= 'A' && ch <= 'Z')      // Capital to small
            {
                ch = (char)(ch + 32);
            }

            dest = dest + ch;
        }
        return dest;
    }
}

class Assignment38_4
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String input = sobj.nextLine();

        Pattern pobj = new Pattern();
        String output = pobj.StrCpySmall(input);

        System.out.println(output);

        sobj.close();
    }
}

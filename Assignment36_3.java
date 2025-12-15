import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : strtogglex
// Description   : Toggle the case of each character of string
// Input         : String
// Output        : Modified String
// Author        : Raj Samir Jadhav
// Date          : 30/11/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public String strtogglex(String str)
    {
        String result = "";

        for(int i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            if(ch >= 'a' && ch <= 'z')           // If small convert to capital
            {
                ch = (char)(ch - 32);
            }
            else if(ch >= 'A' && ch <= 'Z')       // If capital convert to small
            {
                ch = (char)(ch + 32);
            }

            result = result + ch;
        }
        return result;
    }
}

class Assignment36_3
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String input = sobj.nextLine();

        Pattern pobj = new Pattern();
        String output = pobj.strtogglex(input);

        System.out.println("Modified string is : " + output);

        sobj.close();
    }
}

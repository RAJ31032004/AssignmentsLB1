import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : struprx
// Description   : Convert complete string into uppercase
// Input         : String
// Output        : Uppercase string
// Author        : Raj Samir Jadhav
// Date          : 07/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public String struprx(String str)   // Function returns modified string
    {
        String result = "";

        for(int i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            if(ch >= 'a' && ch <= 'z')  // If lowercase, convert to uppercase
            {
                ch = (char)(ch - 32);
            }
            result = result + ch;
        }
        return result;
    }
}

class Assignment36_2
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String input = sobj.nextLine();

        Pattern pobj = new Pattern();
        String output = pobj.struprx(input);

        System.out.println("Modified string is : " + output);

        sobj.close();
    }
}

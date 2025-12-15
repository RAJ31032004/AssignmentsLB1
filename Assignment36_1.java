import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : strlwrx
// Description   : Convert complete string to lowercase
// Input         : String
// Output        : Modified string in lowercase
// Author        : Raj Samir Jadhav
// Date          : 07/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public String strlwrx(String str)    // Function returns modified string
    {
        String result = "";

        for(int i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            if(ch >= 'A' && ch <= 'Z')   // Capital to lowercase
            {
                ch = (char)(ch + 32);
            }

            result = result + ch;        // Store updated char
        }
        return result;
    }
}

class Assignment36_1
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String input = sobj.nextLine();

        Pattern pobj = new Pattern();
        String output = pobj.strlwrx(input);

        System.out.println("Modified string is : " + output);

        sobj.close();
    }
}

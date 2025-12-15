import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : Reverse
// Description   : Reverse the string and display output
// Input         : String
// Output        : Reversed String
// Author        : Raj Samir Jadhav
// Date          : 03/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public void Reverse(String str)                 // Function
    {
        String rev = "";                            // Empty string for storing reverse

        for(int i = str.length() - 1; i >= 0; i--)   // Loop backward
        {
            rev = rev + str.charAt(i);
        }

        System.out.println("Reversed string : " + rev);
    }
}

class Assignment35_5
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String input = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Reverse(input);                 // Function call

        sobj.close();
    }
}

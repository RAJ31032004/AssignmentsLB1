import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : ChkVowel
// Description   : Check if the string contains vowels (a,e,i,o,u)
// Input         : String
// Output        : TRUE or FALSE
// Author        : Raj Samir Jadhav
// Date          : 03/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public boolean ChkVowel(String str)     // Function
    {
        for(int i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            // Check lowercase & uppercase vowels
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
               ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            {
                return true;              // Vowel found
            }
        }
        return false;                     // No vowel found
    }
}

class Assignment35_4
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String input = sobj.nextLine();

        Pattern pobj = new Pattern();
        boolean bRet = pobj.ChkVowel(input);

        if(bRet == true)
        {
            System.out.println("Contains Vowel");
        }
        else
        {
            System.out.println("There is no Vowel");
        }

        sobj.close();                   // To avoid scanner warning
    }
}

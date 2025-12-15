import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : FirstChar
// Description   : Return index of first occurrence of character in string
// Input         : String, Character
// Output        : Integer Index OR -1 if not found
// Author        : Raj Samir Jadhav
// Date          : 01/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public int FirstChar(String str, char ch)
    {
        for(int i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) == ch)   // Character found
            {
                return i;
            }
        }
        return -1;                    // If not found
    }
}

class Assignment37_3
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String input = sobj.nextLine();

        System.out.println("Enter the character : ");
        char cValue = sobj.next().charAt(0);

        Pattern pobj = new Pattern();
        int iRet = pobj.FirstChar(input, cValue);

        System.out.println("Index is : " + iRet);

        sobj.close();
    }
}

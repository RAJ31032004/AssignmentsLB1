import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : CountChar
// Description   : Return frequency of given character in string
// Input         : String, Character
// Output        : Integer (Count)
// Author        : Raj Samir Jadhav
// Date          : 03/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public int CountChar(String str, char ch)
    {
        int iCnt = 0;

        for(int i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) == ch)
            {
                iCnt++;                  // Count match
            }
        }
        return iCnt;
    }
}

class Assignment37_2
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String input = sobj.nextLine();

        System.out.println("Enter the character : ");
        char cValue = sobj.next().charAt(0);

        Pattern pobj = new Pattern();
        int iRet = pobj.CountChar(input, cValue);

        System.out.println("Character frequency is : " + iRet);

        sobj.close();
    }
}

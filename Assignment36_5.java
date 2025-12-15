import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : CountWhite
// Description   : Count number of spaces present in string
// Input         : String
// Output        : Integer (space count)
// Author        : Raj Samir Jadhav
// Date          : 30/11/2025
///////////////////////////////////////////////////////////////////////////////
/// 
class Pattern
{
    public int CountWhite(String str)
    {
        int iCnt = 0;

        for(int i = 0; i < str.length(); i++)
        {
            if(str.charAt(i) == ' ')        // Space check
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}

class Assignment36_5
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String input = sobj.nextLine();

        Pattern pobj = new Pattern();
        int iRet = pobj.CountWhite(input);

        System.out.println("Number of white spaces : " + iRet);

        sobj.close();
    }
}

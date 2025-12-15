import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : CountSmall
// Description   : Count the number of small characters (a-z) from string
// Input         : String
// Output        : Integer (count of lowercase letters)
// Author        : Raj Samir Jadhav
// Date          : 03/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public int CountSmall(String str)           // Function
    {
        int iCnt = 0;                           // Counter

        for(int i = 0; i < str.length(); i++)   // Loop through string
        {
            char ch = str.charAt(i);

            if(ch >= 'a' && ch <= 'z')          // Check if character is lowercase
            {
                iCnt++;
            }
        }
        return iCnt;                            // Return count
    }
}

class Assignment35_2
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String input = sobj.nextLine();

        Pattern pobj = new Pattern();
        int iRet = pobj.CountSmall(input);

        System.out.println("Number of small characters : " + iRet);

        sobj.close();                         // Close Scanner to avoid warning
    }
}

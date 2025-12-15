import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : CountCapital
// Description   : Count the number of capital characters (A-Z) from string
// Input         : String
// Output        : Integer (Count of capital letters)
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public int CountCapital(String str)          // Function
    {
        int iCnt = 0;                           // Counter

        for(int i = 0; i < str.length(); i++)   // Loop till end of string
        {
            char ch = str.charAt(i);

            if(ch >= 'A' && ch <= 'Z')          // Check if character is Capital
            {
                iCnt++;
            }
        }
        return iCnt;                             // Return count
    }
}

class Assignment34_1
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String input = sobj.nextLine();

        Pattern pobj = new Pattern();
        int iRet = pobj.CountCapital(input);

        System.out.println("Number of capital characters : " + iRet);  // Display Result

        sobj.close();
    }
}

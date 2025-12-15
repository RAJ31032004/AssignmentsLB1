import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : Difference
// Description   : Calculate difference between frequency of small and capital characters
// Input         : String
// Output        : Integer (Difference)
// Author        : Raj Samir Jadhav
// Date          : 03/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public int Difference(String str)          // Function
    {
        int iSmall = 0, iCapital = 0;

        for(int i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            if(ch >= 'a' && ch <= 'z')        // Small letter
            {
                iSmall++;
            }
            else if(ch >= 'A' && ch <= 'Z')   // Capital letter
            {
                iCapital++;
            }
        }
        return iSmall - iCapital;             // Return difference
    }
}

class Assignment35_3
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String input = sobj.nextLine();

        Pattern pobj = new Pattern();
        int iRet = pobj.Difference(input);

        System.out.println("Difference is : " + iRet);

        sobj.close();                       // Close scanner to avoid warning
    }
}

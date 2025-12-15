import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : Strlen
// Description   : Recursively count characters in string
// Input         : String
// Output        : Count of characters
// Author        : Raj Samir Jadhav
// Date          : 06/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    int iCnt = 0;

    int Strlen(String str, int index)
    {
        if(index < str.length())
        {
            iCnt++;
            Strlen(str, index + 1);  // Recursive step
        }
        return iCnt;
    }
}

class Assignment41_3
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter string : ");
        String input = sobj.nextLine();

        Pattern pobj = new Pattern();
        int result = pobj.Strlen(input, 0);

        System.out.println(result);

        sobj.close();
    }
}

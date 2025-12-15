import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : StrRevX
// Description   : Reverse the string and return modified string
// Input         : String
// Output        : Reversed String
// Author        : Raj Samir Jadhav
// Date          : 01/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public String StrRevX(String str)
    {
        char arr[] = str.toCharArray(); // Convert to character array
        int start = 0;
        int end = arr.length - 1;

        char temp;

        while(start < end)              // Swap characters
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
        }

        return new String(arr);        // Return reversed string
    }
}

class Assignment37_5
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String input = sobj.nextLine();

        Pattern pobj = new Pattern();
        String output = pobj.StrRevX(input);

        System.out.println("Modified string is : " + output);

        sobj.close();
    }
}

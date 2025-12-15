import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : DisplaySchedule
// Description   : Shows exam time based on division (A/B/C/D)
// Input         : Character (Division)
// Output        : Exam timing
// Note          : Case-Insensitive
// Author        : Raj Samir Jadhav
// Date          : 28/11/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    public void DisplaySchedule(char chDiv)
    {
        if(chDiv >= 'a' && chDiv <= 'z')               // Convert lowercase to uppercase
        {
            chDiv = (char)(chDiv - 32);
        }

        switch(chDiv)                                  // Switch Case
        {
            case 'A':
                System.out.println("Your exam at 7 AM");
                break;

            case 'B':
                System.out.println("Your exam at 8.30 AM");
                break;

            case 'C':
                System.out.println("Your exam at 9.20 AM");
                break;

            case 'D':
                System.out.println("Your exam at 10.30 AM");
                break;

            default:
                System.out.println("Invalid Division");
                break;
        }
    }
}

class Assignment33_5
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your division : "); // Take input
        char cValue = sobj.next().charAt(0);

        Pattern pobj = new Pattern();
        pobj.DisplaySchedule(cValue);                 // Function call
    }
}
import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Check
//    Description :         To check whether 11 is present or not
//    Input :               Integer
//    Output :              True or False
//    Author :              Raj Samir Jadhav
//    Date :                16/11/2025
////////////////////////////////////////////////////////////////////

public class CheckNumber
{
    public static boolean Check(int arr[], int length)           // Function to check whether 11 exists in array
    {
        for(int i = 0; i < length; i++)
        {
            if(arr[i] == 11)                                    // If element equals 11
            {
                return true;                                     // Return true immediately
            }
        }
        return false;                                             // 11 not found
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of elements: ");           // Accept number of elements
        int size = sc.nextInt();

        int arr[] = new int[size];

        System.out.println("Enter " + size + " elements:");        // Accept elements
        for(int i = 0; i < size; i++)
        {
            System.out.print("Enter element " + (i + 1) + ": ");
            arr[i] = sc.nextInt();
        }

        boolean result = Check(arr, size);                         // Call function

       
        if(result)
            System.out.println("11 is present");                    // Print result
        else
            System.out.println("11 is absent");

        sc.close();
    }
}

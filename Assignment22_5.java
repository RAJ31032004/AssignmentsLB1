import java.util.Scanner;

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Frequency
//    Description :         To count frequency of given number in array
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                16/11/2025
////////////////////////////////////////////////////////////////////

public class FrequencyNumber
{
    public static int Frequency(int arr[], int length, int iNo)          // Function to getfrequency of iNo in array
    {
        int freq = 0;

        for(int i = 0; i < length; i++)                                 // Traverse array

        {
            if(arr[i] == iNo)   
            {
                freq++;                                             // Increase count
            }
        }
        return freq;                                               // Return final frequency
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of elements: ");            // Accept number of elements
        int size = sc.nextInt();

        System.out.print("Enter the number: ");                    // Accept number to search
        int value = sc.nextInt();

        int arr[] = new int[size];

        System.out.println("Enter " + size + " elements:");         // Accept elements
        for(int i = 0; i < size; i++)
        {
            System.out.print("Enter element " + (i + 1) + ": ");
            arr[i] = sc.nextInt();
        }

        int result = Frequency(arr, size, value);                    // Call function

        System.out.println("Frequency of " + value + " is: " + result);

        sc.close();
    }
}

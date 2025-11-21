import java.util.Scanner;
/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       FrequencyDifference
//    Description :         To get count of even number from the array
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                16/11/2025
////////////////////////////////////////////////////////////////////
public class FrequencyDifference
{
    public static int Frequency(int arr[], int length)              // Function to return difference between frequency of even and odd numbers
    {
        int evenCount = 0, oddCount = 0;

        for(int i = 0; i < length; i++)                              // Loop through all elements
        {
            if(arr[i] % 2 == 0)                                      // Check even
            {
                evenCount++;
            }
            else                                                      // Odd number
            {
                oddCount++;
            }
        }

        return evenCount - oddCount;                                  // Return difference (Even - Odd)
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of elements: ");                       // Ask user for number of elements
        int size = sc.nextInt();

        int arr[] = new int[size];

        System.out.println("Enter " + size + " elements:");                    // Input array elements
        for(int i = 0; i < size; i++)
        {
            System.out.print("Enter element " + (i + 1) + ": ");
            arr[i] = sc.nextInt();
        }

        int result = Frequency(arr, size);                                    // Call function

        System.out.println("Difference (Even - Odd) = " + result);

        sc.close();
    }
}

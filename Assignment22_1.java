import java.util.Scanner;

/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       CountEven
//    Description :         To get count of even number from the array
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                16/11/2025
////////////////////////////////////////////////////////////////////
/// 
public class CountEvenNumbers 
{
    public static int CountEven(int arr[], int length)
    {
        int evenCount = 0;

        for(int i = 0; i < length; i++)
        {
            if(arr[i] % 2 == 0)
            {
                evenCount++;
            }
        }
        return evenCount;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int size = sc.nextInt();

        int arr[] = new int[size];

        System.out.println("Enter " + size + " elements:");
        for(int i = 0; i < size; i++)
        {
            System.out.print("Enter element " + (i + 1) + ": ");
            arr[i] = sc.nextInt();
        }

        int result = CountEven(arr, size);

        System.out.println("Frequency of even numbers is: " + result);
        
        sc.close();
    }
}


public class CountEvenNumbers 
{
    public static int CountEven(int arr[], int length)
    {
        int evenCount = 0;

        for(int i = 0; i < length; i++)
        {
            if(arr[i] % 2 == 0)
            {
                evenCount++;
            }
        }
        return evenCount;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int size = sc.nextInt();

        int arr[] = new int[size];

        System.out.println("Enter " + size + " elements:");
        for(int i = 0; i < size; i++)
        {
            System.out.print("Enter element " + (i + 1) + ": ");
            arr[i] = sc.nextInt();
        }

        int result = CountEven(arr, size);

        System.out.println("Frequency of even numbers is: " + result);
        
        sc.close();
    }
}

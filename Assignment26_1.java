import java.util.*;

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Pattern
//    Description :         To get the pattern.
//    Input :               Integer
//    Output :              Pattern
//    Author :              Raj Samir Jadhav
//    Date :                21/11/2025
////////////////////////////////////////////////////////////////////
/// 
class Main
{
    public static void Pattern(int n)
    {
        for(int i = 0; i < n; i++)
        {
            System.out.print((char)('A' + i) + "\t");
        }
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int n = sc.nextInt();

        Pattern(n);
    }
}

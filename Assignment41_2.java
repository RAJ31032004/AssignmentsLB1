import java.util.Scanner;

///////////////////////////////////////////////////////////////////////////////
// Function Name : Sum
// Description   : Calculate sum of digits recursively
// Input         : Integer (iNo)
// Output        : Summation of digits
// Author        : Raj Samir Jadhav
// Date          : 06/12/2025
///////////////////////////////////////////////////////////////////////////////
class Pattern
{
    int iSum = 0;

    int Sum(int iNo)
    {
        if(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;
            Sum(iNo);                       // Recursive call
        }
        return iSum;
    }
}

class Assignment41_2
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number : ");
        int value = sobj.nextInt();

        Pattern pobj = new Pattern();
        int result = pobj.Sum(value);

        System.out.println(result);

        sobj.close();
    }
}

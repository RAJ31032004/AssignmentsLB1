#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display numbers from 1 to given number using recursion
// Input         : Integer
// Output        : 1  2  3  4  ...  N
// Author        : Raj Samir Jadhav
// Date          : 04/12/2025
///////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    static int i = 1;

    if(i <= iNo)                 // Base condition
    {
        printf("%d  ", i);
        i++;
        Display(iNo);             // Recursive call
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

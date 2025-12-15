#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display numbers from N to 1 using recursion
// Input         : Integer
// Output        : N  N-1  ...  1
// Author        : Raj Samir Jadhav
// Date          : 04/12/2025
///////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo > 0)            // Base condition
    {
        printf("%d  ", iNo);
        iNo--;
        Display(iNo);     // Recursive call
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

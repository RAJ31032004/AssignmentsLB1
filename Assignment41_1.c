#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Description   : Display numbers with star recursively from N to 1
// Input         : Integer (iNo)
// Output        : N  *  ...  1  *
// Author        : Raj Samir Jadhav
// Date          : 06/12/2025
///////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo > 0)                 // Base condition
    {
        printf("%d  *  ", iNo);
        Display(iNo - 1);       // Recursive call
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

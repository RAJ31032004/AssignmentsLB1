#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : Fact
// Description   : Return factorial using recursion
// Input         : Integer
// Output        : Factorial of number
// Author        : Raj Samir Jadhav
// Date          : 06/12/2025
///////////////////////////////////////////////////////////////////////////////

int Fact(int iNo)
{
    static int iFact = 1;

    if(iNo > 0)          // Base condition
    {
        iFact = iFact * iNo;
        Fact(iNo - 1);   // Recursive call
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("%d\n", iRet);

    return 0;
}

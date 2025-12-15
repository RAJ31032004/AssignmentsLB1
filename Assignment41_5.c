#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : Mult
// Description   : Return product of digits using recursion
// Input         : Integer
// Output        : Product of digits
// Author        : Raj Samir Jadhav
// Date          : 06/12/2025
//////////////////////////////////////////////////////////////////////////////

int Mult(int iNo)
{
    static int iProd = 1;             // Store result

    if(iNo != 0)                     // Base condition
    {
        iProd = iProd * (iNo % 10);  // Extract digit and multiply
        iNo = iNo / 10;
        Mult(iNo);                  // Recursive call
    }

    return iProd;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("%d\n", iRet);

    return 0;
}

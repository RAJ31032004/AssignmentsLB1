#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
// Function Name : Sum
// Description   : Recursively calculate summation of digits
// Input         : Integer (iNo)
// Output        : Sum of digits
///////////////////////////////////////////////////////////////////////////////
int Sum(int iNo)
{
    static int iSum = 0;

    if(iNo != 0)                   // Base condition
    {
        iSum = iSum + (iNo % 10);  // Extract last digit
        iNo = iNo / 10;
        Sum(iNo);                  // Recursive call
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Sum(iValue);

    printf("%d\n", iRet);

    return 0;
}

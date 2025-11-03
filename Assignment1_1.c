#include <stdio.h>                     // For Input Output

/////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :       Divide
//    Description :         It is to Divide two numbers
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                18/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)          // Function to divide the two numbers
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is %d", iRet);

    return 0;
}

/*
      Time Complexity   :   O(1)
*/
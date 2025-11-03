#include<stdio.h>                                        // for input and output

///////////////////////////////////////////////////////////////////////////////
//    Function Name :       CountDiffernce
//    Description :         Take input from user and return the difference between the summation of even and odd digits.
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                25/10/2025
///////////////////////////////////////////////////////////////////////////////


int CountDifference(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;                                   // Stores the sum of even digits
    int iOddSum = 0;                                    // Stores the sum of odd digits

    if(iNo < 0)                                         // Updater: Handle negative numbers
    {
        iNo = -iNo;
    }

    while(iNo != 0)                                       // Loop until all digits are checked
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iEvenSum = iEvenSum + iDigit;                  // Add to even sum
        }
        else
        {
            iOddSum = iOddSum + iDigit;                    // Add to odd sum
        }

        iNo = iNo / 10;
    }

    return iEvenSum - iOddSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");                               // Take input from the user
    scanf("%d",&iValue);

    iRet = CountDifference(iValue);                         // function call

    printf("%d\n",iRet);                                  

    return 0;
}

/*
   Time Complexity : O(N)
*/
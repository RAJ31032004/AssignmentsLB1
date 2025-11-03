#include<stdio.h>                                   // for input and output

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       CountOdd
//    Description :         Take input from user and return the count of Odd digits
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                25/10/2025
///////////////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
 
    if(iNo < 0)                                     // To handle negative numbers
    {
        iNo = -iNo;
    }

    while(iNo != 0)                                 // Loop until all digits are checked

    {
        iDigit = iNo % 10;

        if((iDigit % 2) != 0)
        {
            iCount++;                                // Increment the counter
        }

        iNo = iNo / 10;
    }

    return iCount;                                   // Return the final count
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");                         // Take input from user
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d\n",iRet); 

    return 0;
}

/*
   Time Complexity : O(N)
*/
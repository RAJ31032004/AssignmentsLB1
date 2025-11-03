#include<stdio.h>                                 //For input and ouput

///////////////////////////////////////////////////////////////////////////////
//    Function Name :       CountRange
//    Description :         Take input from user and return the count of digits brtween 3 and 7
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                25/10/2025
///////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

   
    if(iNo < 0)                                       // Updandle negative numbers
    {
        iNo = -iNo;
    }

   
    while(iNo != 0)                                    // Loop until all digits are checked
    {
        iDigit = iNo % 10;

        if((iDigit > 3) && (iDigit < 7))
        {
            iCount++;                                  // Increment the counter
        }

        iNo = iNo / 10;
    }

    return iCount;                                     // Return the final count
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d\n",iRet);                               // Added a newline for clearer output

    return 0;
}

/*
  Time Complexity : O(N)
*/
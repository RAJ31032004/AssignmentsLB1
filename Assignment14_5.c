#include<stdio.h>                                       // For input and output
 
////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Count
//    Description :         Take input from user and counts frequency of such digit which is less than 6
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                25/10/2025
///////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo == 0)
    {
        return 1;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    
    while(iNo != 0)                               // Loop until all digits are checked
    {
        
        iDigit = iNo % 10;                       //  Get the last digit

        if(iDigit < 6)                           // Check if the digit is less than 6
        {
            iCount++;                            // Increment the counter
        }

        iNo = iNo / 10;
    }

    return iCount;                               // Return the final count
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");                    // Take input from user 
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d\n",iRet); 

    return 0;
}

/*
   Time complexity : O(N)
*/
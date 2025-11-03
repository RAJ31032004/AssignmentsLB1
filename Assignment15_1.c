#include<stdio.h>                                  // For input and output

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       CountEven
//    Description :         Take input from user and return the count of even digits
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                25/10/2025
///////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)              
{
    int iDigit = 0;
    int iCount = 0;

   
    if(iNo < 0)                                      // Updater: Handle negative numbers
    {
        iNo = -iNo;
    }
    
    
    if(iNo == 0)                                     // Special case: 0 is an even digit
    {
        return 1;
    }

   
    while(iNo != 0)                                   // Loop until all digits are checked
    {
        iDigit = iNo % 10;

       
        if((iDigit % 2) == 0)                          //  Check if the digit is even
        {
            iCount++;                                  // Increment the counter
        }

        iNo = iNo / 10;
    }

    return iCount; 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");                          // Take input from user
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d\n",iRet); 
    return 0;
}

/*
   Time complexity : O(N)
*/
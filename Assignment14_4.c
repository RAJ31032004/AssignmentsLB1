#include<stdio.h>                       //For input output

////////////////////////////////////////////////////////////////////////////////
//    Function Name :       CountFour
//    Description :         Take input from user and counts frequency of 4 in it
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                25/10/2025
///////////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)                                 // Loop until all digits are checked
    {
        
        iDigit = iNo % 10;                          //  Get the last digit

       
        if(iDigit == 4)                              //  Check if the digit is 4
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

    printf("Enter number: ");                       //Take Input from user
    scanf("%d",&iValue);

    iRet = CountFour(iValue);                    

    printf("%d\n",iRet); 

    return 0;
}

/*
    Time Complexity : O(N)
*/
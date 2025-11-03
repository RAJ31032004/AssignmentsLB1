#include <stdio.h>                                    // For input output

////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :       SumNonFact
//    Description :         Accept the number and return summation of all its factors
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                19/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)            // Function                  
{
    int iSum = 0;
    int i = 0;
    
    if (iNo <= 0)                  // It handels non zero values
    {
        return 0; 
    }

    for (i = 1; i < iNo; i++)       //                
    {
        if ((iNo % i) != 0)
        {
            iSum = iSum + i; 
        }
    }
    
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : \n");        // Takes the value from user
    scanf("%d", &iValue);
    
    iRet = SumNonFact(iValue);
    
    printf("%d\n", iRet);
    
    return 0;
}


/*
  Time Complexity : o(N)
*/
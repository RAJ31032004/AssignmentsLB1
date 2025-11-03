#include <stdio.h>                     //For input and output

/////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name :       MultFact
//    Description :         It is to multiply factors of a number
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                19/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////


int MultFact(int iNo)                 // Function to multiply factors of a number
{
    if (iNo <= 0)
    {
        return 0; 
    }
    
    int iFactMult = 1;                // Initialize product of factors to 1
    int i = 0;
    
    for (i = 1; i <= iNo / 2; i++) 
    {
        
        if ((iNo % i) == 0)
        {
            iFactMult = iFactMult * i;  // Multiply the factor to the product
        }
    }
    
    
    return iFactMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number  : \n");
    scanf("%d", &iValue);
    
    iRet = MultFact(iValue);
    
    printf("%d\n", iRet);
    
    return 0;
}


/*
      Time Complexity   :   O(N)
*/
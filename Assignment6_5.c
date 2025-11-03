#include <stdio.h>                                      // For Input Output

/////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       Percentage
//    Description :         Accepts total marks and obtained marks, returns percentage
//    Input :               Integer
//    Output :              Float
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
/////////////////////////////////////////////////////////////////////////////////////////////

float Percentage(int iTotal, int iObtained)             // Function to calculate percentage. 
{
    float fResult = 0.0;
    
    if (iTotal <= 0)
    {
        return 0.0;                                      // Percemtage cannot be calclulated if value is zero or less than zero
    }

    fResult = ((float)iObtained / iTotal) * 100.0;       // Calculate percentage
    
    return fResult;
}

int main()
{
    int iValue1 = 0; 
    int iValue2 = 0; 
    float fRet = 0.0;
    
    printf("Please enter total marks\n");
    scanf("%d", &iValue1);
    
    printf("Please enter obtained marks\n");
    scanf("%d", &iValue2);
    
    fRet = Percentage(iValue1, iValue2);               // Function Call
    
    printf("%.1f%%\n", fRet);                          // Display the percentage
    
    return 0;
}

/*
   Time Complexity : O(N)
*/
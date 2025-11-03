#include <stdio.h>                              // for input and output functions
#define PI 3.14                                 // Define the value of PI

//////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       CircleArea   
//    Description :         To calculate area of circle given radius.
//    Input :               Float
//    Output :              Double
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
//////////////////////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    return PI * fRadius * fRadius;              // Calculate area using the formula: Area = π * r^2  
}

int main()
{
    float fValue = 0.0f;                        // To store the radius input
    double dRet = 0.0;                          // To store the area result

    printf("Enter radius: ");
    scanf("%f", &fValue); 
    dRet = CircleArea(fValue);

    printf("Area of circle is %.4f\n", dRet);

    return 0;
}
/*
   Time Complexity : O(1)
*/
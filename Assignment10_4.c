#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////
//    Function Name :       FhtoCs
//    Description :         To convert temperature from Fahrenheit to Celsius.
//    Input :               Float
//    Output :              Double
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
///////////////////////////////////////////////////////////////////////////////////////////////

double FarenhitToCelsius(float fTemp)
{
    return (fTemp - 32.0) * (5.0 / 9.0); 
}

int main()
{
    float fValue = 0.0f;                                  // To store the Fahrenheit input
    double dRet = 0.0;                                    // To store the Celsius result

    printf("Enter temperature in Fahrenheit: ");
   
    if (scanf("%f", &fValue) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    dRet = FarenhitToCelsius(fValue);

    printf("Temperature in Celsius is %.4f\n", dRet);

    return 0;
}

/*
   Time Complexity : O(1)
*/
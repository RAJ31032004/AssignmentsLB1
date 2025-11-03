#include <stdio.h>                                                            
/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       RectangleArea
//    Description :         To calculate area of rectangle given width and height.
//    Input :               Float, Float
//    Output :              Double  
//    Author :              Raj Samir Jadhav
//    Date :                20/10/2025
/////////////////////////////////////////////////////////////////////////////////


double RectangleArea(float fWidth, float fHeight)
{
    return fWidth * fHeight; 
}

int main()
{
    float fValue1 = 0.0f;                                            // For width
    float fValue2 = 0.0f;                                            // For height
    double dRet = 0.0;                                               // For the area result

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectangleArea(fValue1, fValue2);

    printf("Area of rectangle is %f\n", dRet);

    return 0;
}

/*
   Time Complexity : O(1)
*/
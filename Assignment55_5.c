#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   MaxInt
//  Description   :   Returns maximum of four integers
//  Input         :   Integer, Integer, Integer, Integer
//  Output        :   Integer
//
/////////////////////////////////////////////////////////////////////////////////////////////
int MaxInt(int a, int b, int c, int d)
{
    int max = a;

    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;

    return max;
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   MaxFloat
//  Description   :   Returns maximum of four float values
//  Input         :   Float, Float, Float, Float
//  Output        :   Float
//
/////////////////////////////////////////////////////////////////////////////////////////////
float MaxFloat(float a, float b, float c, float d)
{
    float max = a;

    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;

    return max;
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Generic Macro :   Max
//  Description   :   Selects correct function based on datatype
//
/////////////////////////////////////////////////////////////////////////////////////////////
#define Max(a, b, c, d) _Generic((a), \
                        int   : MaxInt, \
                        float : MaxFloat \
                      )(a, b, c, d)

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
/////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iRet = Max(10, 40, 20, 30);
    printf("Maximum integer value is : %d\n", iRet);

    float fRet = Max(10.5f, 40.2f, 20.1f, 30.8f);
    printf("Maximum float value is : %.2f\n", fRet);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>


/////////////////////////////////////////////////////////////////////////////////
//    Function Name :       CountEven
//    Description :         To get count of even number from the array
//    Input :               Integer
//    Output :              Integer
//    Author :              Raj Samir Jadhav
//    Date :                16/11/2025
/////////////////////////////////////////////////////////////////////////////////


int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iEvenCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = CountEven(p, iSize);

    printf("Result is %d\n", iRet);

    free(p);

    return 0;
}

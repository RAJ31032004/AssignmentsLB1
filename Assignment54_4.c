#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :   Reverse
//  Description   :   Generic function to reverse the array
//  Input         :   Pointer to array, number of elements, size of one element
//  Output        :   Reversed array
//  Author        :   Raj Samir Jadhav
//  Date          :   11/01/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////

void Reverse(void *Arr, int iSize, int iElementSize)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    char *temp = (char *)malloc(iElementSize);

    if(temp == NULL)
    {
        return;
    }

    while(iStart < iEnd)
    {
        // temp = Arr[iStart]
        memcpy(temp, (char *)Arr + (iStart * iElementSize), iElementSize);

        // Arr[iStart] = Arr[iEnd]
        memcpy((char *)Arr + (iStart * iElementSize),
               (char *)Arr + (iEnd * iElementSize),
               iElementSize);

        // Arr[iEnd] = temp
        memcpy((char *)Arr + (iEnd * iElementSize),
               temp,
               iElementSize);

        iStart++;
        iEnd--;
    }

    free(temp);
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
/////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};
    int iCnt = 0;

    Reverse(Arr, 5, sizeof(int));

    printf("Reversed array is : \n");
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\t", Arr[iCnt]);
    }

    printf("\n");
    return 0;
}

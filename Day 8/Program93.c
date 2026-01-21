#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Average
//  Description         :   Calculates and returns the average of all elements of the array.
//  Input               :   Integer array (Base address of array), Integer (Size of array)
//  Output              :   Float (Returns average of array elements)
//  Author              :   Gavade Somanath Vilas
//  Date                :   21/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
float Average(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return ((float)iSum / (float)iSize);

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Average of Array Elements Using Dynamic Memory Allocation
//  Description         :   This application dynamically allocates memory for an integer array, accepts elements from the user, calculates the average of the
//                          elements using a function, and then releases the allocated memory.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0;
    float fRet = 0.0f;

    printf("Enter the number of Elements : \n");
    scanf("%d", &iLength);

    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    fRet = Average(ptr, iLength);

    printf("Average is : %f\n", fRet);

    free(ptr);

    return 0;
}
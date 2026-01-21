#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   AdditionOdd
//  Description         :   Calculates and returns the summation of all odd elements from the given array.
//  Input               :   Integer array (Base address of array), Integer (Size of array)
//  Output              :   Integer (Returns sum of odd numbers)
//  Author              :   Gavade Somanath Vilas
//  Date                :   21/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int AdditionOdd(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iSum = iSum + Arr[iCnt];
        }
    }

    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Addition of Odd Elements Using Dynamic Memory Allocation
//  Description         :   This application dynamically allocates memory for an integer array, accepts elements from the user, calculates the sum of all odd
//                          elements using a function, and then releases the allocated memory.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    // Allocate dynamic memory.
    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Enter %d elements : \n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = AdditionOdd(ptr, iLength);     //  Function Call.

    printf("Addition of odd numbers are : %d\n", iRet);

    return 0;
}
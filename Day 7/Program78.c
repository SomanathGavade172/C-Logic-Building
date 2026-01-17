#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Addition
//  Description         :   Calculates and returns the summation of all elements of the array.
//  Input               :   Integer array (Base address of array), Integer (Size of array)
//  Output              :   Integer (Returns summation of array elements)
//  Author              :   Gavade Somanath Vilas
//  Date                :   17/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int Addition(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Dynamic Memory Allocation with Array Addition
//  Description         :   This application dynamically allocates memory for an integer array, accepts elements from the user, calculates their summation using
//                          a function, and then releases the allocated memory.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iLength = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter a the number of elements : \n");
    scanf("%d", &iLength);

    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Please enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Addition(ptr, iLength);      //  Function Call

    printf("Addition is : %d\n", iRet);

    free(ptr);

    return 0;
}
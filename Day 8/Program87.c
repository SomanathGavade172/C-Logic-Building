#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   AdditionEvenOdd
//  Description         :   Calculates and displays the summation of even and odd elements from the given array.
//  Input               :   Integer array (Base address of array), Integer (Size of array)
//  Output              :   Displays sum of even numbers and sum of odd numbers
//  Author              :   Gavade Somanath Vilas
//  Date                :   21/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void AdditionOdd(int Arr[], int iSize)
{
    int iCnt = 0, iSumEven = 0, iSumOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];  
        }
    }

    printf("Addition of Even numbers are : %d\n", iSumEven);
    printf("Addition of Odd numbers are : %d\n", iSumOdd);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Addition of Even and Odd Elements Using Dynamic Memory Allocation
//  Description         :   This application dynamically allocates memory for an integer array, accepts elements from the user, calculates the sum of even and odd
//                          elements separately using a function, and then releases the allocated memory.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    // Allocate dynamic memory.
    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Enter %d elements : \n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    AdditionOdd(ptr, iLength);     //  Function Call.

    return 0;
}
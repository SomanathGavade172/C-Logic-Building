#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Frequency
//  Description         :   Counts how many times the number 10 appears in the given array.
//  Input               :   Integer array (Base address of array), Integer (Size of array)
//  Output              :   Integer (Returns frequency of number 10)
//  Author              :   Gavade Somanath Vilas
//  Date                :   21/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int Frequency(int Arr[], int iSize)
{
    int iCnt = 0, iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 10)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Frequency of Number 10 Using Dynamic Memory Allocation
//  Description         :   This application dynamically allocates memory for an integer array, accepts elements from the user, counts the frequency of number 10
//                          using a function, and then releases the allocated memory.
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

    iRet = Frequency(ptr, iLength);     //  Function Call.

    printf("Frequency of given number is : %d\n", iRet);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Frequency
//  Description         :   Counts how many times a given number (NO) appears in the array.
//  Input               :   Integer array (Base address of array),
//                          Integer (Size of array), Integer (Number to search)
//  Output              :   Integer (Returns frequency of given number)
//  Author              :   Gavade Somanath Vilas
//  Date                :   21/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Frequency of Given Number Using Dynamic Memory Allocation
//  Description         :   This application dynamically allocates memory for an integer array, accepts elements from the user, accepts a number to search,
//                          counts its frequency using a function, and then releases the allocated memory.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0, iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    // Allocate dynamic memory.
    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Enter %d elements : \n", iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter a number you want to search : \n");
    scanf("%d", &iValue);

    iRet = Frequency(ptr, iLength, iValue);     //  Function Call.

    printf("Frequency of %d number is : %d\n", iValue, iRet);

    return 0;
}
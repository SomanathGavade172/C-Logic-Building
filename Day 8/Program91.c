#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Search
//  Description         :   Checks whether a given number is present in the array or not.
//  Input               :   Integer array (Base address of array), Integer (Size of array),
//                          Integer (Number to search)
//  Output              :   Boolean (Returns TRUE if number is present, otherwise FALSE)
//  Author              :   Gavade Somanath Vilas
//  Date                :   21/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
BOOL Search(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iFrequency = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = TRUE;
            break;
        }
    }

    return FALSE;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Search Number Using Dynamic Memory Allocation
//  Description         :   This application dynamically allocates memory for an integer array, accepts elements from the user, accepts a number to search,
//                          checks whether the number is present using a function, and then releases the allocated memory.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iValue = 0;
    BOOL bRet = FALSE;

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

    bRet = Search(ptr, iLength, iValue);     //  Function Call.

    if(bRet == TRUE)
    {
        printf("%d is present\n", iValue);
    }
    else
    {
        printf("%d is absent\n");
    }

    return 0;
}
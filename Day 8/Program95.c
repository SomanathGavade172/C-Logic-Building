#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Minimum
//  Description         :   Finds and returns the Minimum element from the given array.
//  Input               :   Integer array (Base address of array), Integer (Size of array)
//  Output              :   Integer (Returns Minimum element)
//  Author              :   Gavade Somanath Vilas
//  Date                :   21/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int Minimum(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0;
    iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Minimum Element Using Dynamic Memory Allocation
//  Description         :   This application dynamically allocates memory for an integer array, accepts elements from the user, finds the Minimum element using
//                          a function, and then releases the allocated memory.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter the number of Elements : \n");
    scanf("%d", &iLength);

    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Minimum(ptr, iLength);

    printf("Minimum Number is : %d\n", iRet);

    free(ptr);

    return 0;
}
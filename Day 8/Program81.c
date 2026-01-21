#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Addition
//  Description         :   Calculates and returns the summation of all elements of the array.
//  Input               :   Integer array (Base address of array), Integer (Size of array)
//  Output              :   Integer (Returns summation of array elements)
//  Author              :   Gavade Somanath Vilas
//  Date                :   18/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int Addition(int Arr[], int isize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < isize; iCnt++)
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

    iRet = Addition(ptr, iLength);

    printf("Addition is : %d\n", iRet);

    free(ptr);

    return 0;
}
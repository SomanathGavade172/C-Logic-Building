#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   ReverseDisplay
//  Description         :   Displays elements of the array in reverse order.
//  Input               :   Integer array (Base address of array), Integer (Size of array)
//  Output              :   Displays array elements in reverse order
//  Author              :   Gavade Somanath Vilas
//  Date                :   21/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void ReverseDisplay(int Arr[], int isize)
{
    int iCnt = 0;

    for(iCnt = isize - 1; iCnt >= 0; iCnt--)
    {
        printf("%d\t", Arr[iCnt]);   
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Reverse Display of Array Using Dynamic Memory Allocation
//  Description         :   This application dynamically allocates memory for an integer array, accepts elements from the user, displays the elements in reverse order
//                          using a function, and then releases the allocated memory.
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

    ReverseDisplay(ptr, iLength);

    free(ptr);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Dynamic Memory Allocation
//  Description         :   This application dynamically allocates memory for an integer array, accepts elements from the user, and then releases the allocated memory.
//  Input               :   Integer (Number of elements, array values)
//  Output              :   None
//  Author              :   Gavade Somanath Vilas
//  Date                :   17/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iLength);

    // Allocate the memory.
    ptr = (int *) malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    
    printf("Enter the elements : \n");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements are the Array are : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    //  Deallocate the memory.
    free(ptr);

    return 0;

}

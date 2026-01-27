#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Dynamic Memory Allocation
//  Description         :   This application dynamically allocates memory for an integer array based on user input and then releases the allocated memory.
//  Input               :   Integer (Number of elements)
//  Output              :   None
//  Author              :   Gavade Somanath Vilas
//  Date                :   17/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0;
    int *ptr = NULL;

    printf("Enter the number of elemenets : \n");
    scanf("%d", &iLength);

    // Allocate dynamic memory.
    ptr = (int *) malloc(iLength * sizeof(int));

    //  Logic

    // Deallocate the memory.
    free(ptr);

    return 0;

}

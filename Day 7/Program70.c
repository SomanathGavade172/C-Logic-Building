#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Display
//  Description         :   Displays all elements of an array using pointer arithmetic.
//  Input               :   Integer pointer (Base address of the array)
//  Output              :   None (Displays array elements on the screen)
//  Author              :   Gavade Somanath Vilas
//  Date                :   17/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void Display(int *ptr, int iSize)
{
    int iCnt = 0;

    printf("Valueof the array is : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Array Display Using Pointer
//  Description         :   This application accepts multiple values from the user, stores them in an array, and displays the elements 
//                          using pointer arithmetic.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int Arr[6];
    int iCnt = 0;

    printf("Please enter the Elements : \n");

    for(iCnt = 0; iCnt < 6; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    Display(Arr, 6);       //  Function Call.

    return 0;
}
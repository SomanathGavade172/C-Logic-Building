#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Display
//  Description         :   Displays array elements using pointer arithmetic.
//  Input               :   Integer pointer (Base address of array)
//  Output              :   Displays array elements
//  Author              :   Gavade Somanath Vilas
//  Date                :   17/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int *ptr)
{
    printf("Valueof the array is : \n");
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n", *ptr);

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
    int Arr[4];
    int iCnt = 0;

    printf("Please enter the Elements : \n");

    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    Display(Arr);        // Function Call.

    return 0;

}

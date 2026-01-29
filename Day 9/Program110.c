/*
    Input  : 4

    Output : 4   3   2   1   0   1   2   3   4  

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Display
//  Description         :   Displays numbers from the given number to 1,
//                          then 0, and then from 1 to the given number.
//  Input               :   Integer (Starting number)
//  Output              :   NONE (Displays numbers on the screen)
//  Author              :   Gavade Somanath Vilas
//  Date                :   29/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 0; iCnt--)
    {
        printf("%d\t", iCnt);
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Mirror Number Pattern Display Using Function
//  Description         :   This application accepts a number from the user and displays a mirror number pattern including zero.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    Display(iValue);        // Function Call.

    return 0;
}

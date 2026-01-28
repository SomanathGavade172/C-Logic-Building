/*
    Input  :   4

    Output :   4   3   2   1   2   3   4
    
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Display
//  Description         :   Displays numbers from the given number to 1 and then from 2 to the given number.
//  Input               :   Integer (Starting number)
//  Output              :   NONE (Displays numbers on the screen)
//  Author              :   Gavade Somanath Vilas
//  Date                :   28/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iCnt);
    }

    for(iCnt = 2; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Mirror Number Pattern Display Using Function
//  Description         :   This application accepts a number from the user and displays numbers from that number to 1 and then from 2 to that number.
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

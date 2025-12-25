#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Display Reverse numbers on the console.
//  Description         :   This Application is used to Display numbers from 5 to 1 in reverse order on the screen.
//  Input               :   None
//  Output              :   Integer
//  Author              :   Gavade Somanath Vilas
//  Date                :   24/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0;

    for(iCnt = 5; iCnt >= 1; iCnt--)
    {
        printf("%d\n", iCnt);
    }

    return 0;
}
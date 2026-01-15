#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Display Digits 
//  Description         :   This application extracts and displays all digits of the given number
//                          in reverse order.
//  Input               :   Integer (Hardcoded)
//  Output              :   NONE (Displays digits on the screen).
//  Author              :   Gavade Somanath Vilas
//  Date                :   15/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iNo = 78945;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\t", iDigit);
        iNo = iNo / 10;
    }

    return 0;
}
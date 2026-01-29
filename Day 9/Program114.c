/*
    Input  :    Row = 4
                Col = 3

    Output :  
                *   *   *
                *   *   *
                *   *   *
                *   *   *
                
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Display
//  Description         :   Displays a rectangular star pattern.
//  Input               :   NONE 
//  Output              :   NONE (Displays star pattern on the screen)
//  Author              :   Gavade Somanath Vilas
//  Date                :   29/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void Display()
{
    printf("*\t");
    printf("*\t");
    printf("*\t");

    printf("\n");

    printf("*\t");
    printf("*\t");
    printf("*\t");

    printf("\n");

    printf("*\t");
    printf("*\t");
    printf("*\t");

    printf("\n");

    printf("*\t");
    printf("*\t");
    printf("*\t");

    printf("\n");

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Rectangular Star Pattern Display Using Function
//  Description         :   This application  displays a rectangular star pattern.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    Display(iValue);        // Function Call.

    return 0;
}

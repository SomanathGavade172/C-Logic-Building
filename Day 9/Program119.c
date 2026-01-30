/*
    Input  :    Row = 4
                Col = 4

    Output :  
                1   2   3   4
                1   2   3   4
                1   2   3   4
                1   2   3   4
                
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Display
//  Description         :   Displays a rectangular number pattern where each row contains numbers from 1 to the given column count.
//  Input               :   Integer (Number of rows and columns)
//  Output              :   NONE (Displays number pattern on the screen)
//  Author              :   Gavade Somanath Vilas
//  Date                :   30/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)          // Outer loop for rows
    {
        for(j = 1; j <= iCol; j++)      // Inner loop for columns
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Rectangular Number Pattern Display Using Function
//  Description         :   This application accepts number of rows and columns from the user and displays a rectangular number pattern.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : \n");
    scanf("%d", &iValue1);

    printf("Enter number of Columns : \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);        // Function Call.

    return 0;
}

/*
    Input  :    Row = 4
                Col = 4

    Output :  
                &   *   *   *
                *   &   *   *
                *   *   &   *
                *   *   *   &
                
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Display
//  Description         :   Displays a rectangular pattern where '&' is printed on the main diagonal positions (i == j) and '*' elsewhere.
//  Input               :   Integer (Number of rows and columns)
//  Output              :   NONE (Displays diagonal pattern on the screen)
//  Author              :   Gavade Somanath Vilas
//  Date                :   31/01/2026
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
            if(i == j)                 // Main diagonal condition
            {
                printf("&\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Diagonal Pattern Display Using Function
//  Description         :   This application accepts number of rows and columns from the user and displays a rectangular pattern
//                          with '&' on the main diagonal and '*' at other positions.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : \n");
    scanf("%d", &iValue1);

    printf("Enter number of Columns : \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);        // Function Call

    return 0;
}

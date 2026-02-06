/*
    Input  : Row = 4   Col = 4

    Output :
            $   $   $   $
            $           $
            $           $
            $   $   $   $
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Display
//  Description    : This function displays a hollow border pattern where '$' is printed on the first row, last row,
//                   first column, and last column. Blank spaces are printed inside the border.
//  Input          : Integer (Rows), Integer (Columns)
//  Output         : Displays the required pattern on console
//  Author         : Gavade Somanath Vilas
//  Date           : 06/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    // Outer loop for rows
    for(i = 1; i <= iRow; i++)
    {
        // Inner loop for columns
        for(j = 1; j <= iCol; j++)
        {
            // Border condition (First/Last row or First/Last column)
            if((i == 1) || (i == iRow) || (j == 1) || (j == iCol))
            {
                printf("$\t");
            }
            else
            {
                // Print blank space inside the border
                printf(" \t");
            }
        }

        // Move to next line after each row
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Hollow Border Pattern Display
//  Description      : This program accepts number of rows and columns from the user and prints a hollow rectangle pattern
//                     where '$' appears on the boundary and spaces appear inside.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : \n");
    scanf("%d", &iValue1);

    printf("Enter number of Columns : \n");
    scanf("%d", &iValue2);

    // Function call to display the pattern
    Display(iValue1, iValue2);

    return 0;
}

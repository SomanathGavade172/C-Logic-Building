/*
    Input  : Row = 4  Col = 4
     
    Output :
                *   *   *   *
                &   &   &   &
                &   &   &   &
                *   *   *   *
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Display
//  Description    : Displays a pattern where '*' is printed on the first row and last row,
//                   '&' is printed on all remaining rows.
//  Input          : Integer (Rows), Integer (Columns)
//  Output         : NONE (Displays pattern on console)
//  Author         : Gavade Somanath Vilas
//  Date           : 03/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i == 1) || (i == iRow))
            {
                printf("*\t");
            }
            else
            {
                printf("&\t");
            }
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : First and Last Row Star Pattern Display
//  Description      : This application accepts number of rows and columns and displays '*' on the first and last row,
//                     and '&' on the remaining rows.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : \n");
    scanf("%d", &iValue1);

    printf("Enter number of Columns : \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);     // Function Call

    return 0;
}

/*
    Input  : Row = 4  Col = 4
     
    Output :
                *   b   c   d
                a   *   c   d
                a   b   *   d
                a   b   c   *
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Display
//  Description    : Displays a square pattern of lowercase alphabets in which '*' is printed on the main diagonal positions (i == j),
//                   and lowercase alphabets are printed at all other positions.
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
    char Ch = 'a';

    // Filter: pattern is valid only for square matrix
    if(iRow != iCol)
    {
        printf("Invalid Input\n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, Ch = 'a'; j <= iCol; j++)
        {
            if(i == j)
            {
                printf("*\t");
            }
            else
            {
                printf("%c\t", Ch);
            }
            Ch++;
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Diagonal Star Alphabet Pattern Display
//  Description      : This application accepts number of rows and columns and displays a pattern where '*' appears on the main diagonal
//                     and lowercase alphabets appear at remaining positions.
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

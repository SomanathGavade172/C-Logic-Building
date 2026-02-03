/*
    Input  : Row = 4  Col = 4
     
    Output :
            a   b   c   d
            a   b   c   d
            a   b   c   d
            a   b   c   d
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Display
//  Description    : Displays a pattern of lowercase alphabets column-wise, where each row prints alphabets starting from 'a'.
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

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, Ch = 'a'; j <= iCol; j++, Ch++)
        {
            printf("%c\t", Ch);
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Repeated Alphabet Pattern Display
//  Description      : This application accepts number of rows and columns and displays the same sequence of lowercase alphabets
//                     in every row.
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

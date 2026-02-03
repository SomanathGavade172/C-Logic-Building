/*
    Input  : Row = 4  Col = 4
     
    Output :
            a   b   c   d
            e   f   g   h
            i   j   k   l
            m   n   o   p 
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Display
//  Description    : Displays a pattern of lowercase alphabets sequentially in row-wise order.
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
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t", Ch);
            Ch++;
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Sequential Alphabet Pattern Display
//  Description      : This application accepts number of rows and columns and displays lowercase alphabets in sequence row-wise.
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

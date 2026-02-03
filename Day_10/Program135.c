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
//  Description    : Displays a pattern of lowercase alphabets where '*' is printed on the diagonal positions (i == j)
//                   and alphabets are printed at other positions.
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
//  Description      : This application accepts number of rows and columns and displays a pattern in which '*' appears on the diagonal positions and 
//                     lowercase alphabets appear at remaining positions.
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

/*
    Input  : 5
     
    Output : a   1   b   2   c   3   d   4   e   5
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  : Display
//  Description    : Displays lowercase alphabets starting from 'a' and corresponding numbers alternately.
//  Input          : Integer
//  Output         : None (Displays characters and numbers on the console)
//  Author         : Gavade Somanath Vilas
//  Date           : 01/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    // Updator: Handle negative input
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, ch = 'a'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t%d\t", ch, iCnt);
    }
    printf("\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Alphabet and Number Pattern Display
//  Description      : This application accepts a number from the user and displays lowercase alphabets with numbers alternately.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iValue);

    Display(iValue);     // Function Call

    return 0;
}

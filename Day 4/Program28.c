#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Application Name    :   Display "Jay Ganesh..." on the console.
//  Description         :   This program prints "Jay Ganesh..." on the screen as many times as specified by the user.
//  Input               :   Int
//  Output              :   Jay Ganesh...
//  Author              :   Gavade Somanath Vilas
//  Date                :   23/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0;
    int iFrequency = 0;

    printf("Enter a frequency : \n");
    scanf("%d", &iFrequency);

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }

    return 0;
}
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Display the Numbers.
//  Description         :   Accept a Frequency and Display the Numbers from 1 to that frequency.
//  Input               :   Int
//  Output              :   Intger from 1 to Frequency.
//  Author              :   Gavade Somanath Vilas
//  Date                :   24/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0;
    int iFrequency = 0;

    printf("Enter the Frequency : \n");
    scanf("%d", &iFrequency);

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\n", iCnt);
    }

    return 0;
}
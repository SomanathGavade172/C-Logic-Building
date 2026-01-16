 #include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Array Demonstration
//  Description         :   This application demonstrates how to store and access multiple values using an array.
//  Input               :   None (Hardcoded values)
//  Output              :   Displays values using array elements
//  Author              :   Gavade Somanath Vilas
//  Date                :   17/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int Arr[4];
    int iCnt = 0;

    printf("Please Enter the Values: \n");
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    printf("Values from the array are : \n");
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }

    return 0;
}
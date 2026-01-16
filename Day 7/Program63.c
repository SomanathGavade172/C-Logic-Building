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
    int icnt = 0;

    int Arr[4] = {10, 20, 30, 40};

    for(icnt = 0; icnt < 4; icnt++)
    {
        printf("%d\n", Arr[icnt]);
    }

    return 0;
}
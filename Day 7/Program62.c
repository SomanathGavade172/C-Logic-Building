#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Array Demonstration
//  Description         :   This application demonstrates the difference between storing values in individual variables and storing
//                          multiple values using an array.
//  Input               :   None (Hardcoded values)
//  Output              :   Displays values using variables and array elements
//  Author              :   Gavade Somanath Vilas
//  Date                :   17/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int No1 = 10;
    int No2 = 20;
    int No3 = 30;
    int No4 = 40;

    int Arr[4] = {10, 20, 30, 40};

    printf("%d\n", No1);
    printf("%d\n", No2);
    printf("%d\n", No3);
    printf("%d\n", No4);

    printf("%d\n", Arr[0]);
    printf("%d\n", Arr[1]);
    printf("%d\n", Arr[2]);
    printf("%d\n", Arr[3]);


    return 0;
}
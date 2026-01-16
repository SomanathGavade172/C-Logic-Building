 #include<stdio.h>

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Sum of Array Elements
//  Description         :   This application accepts multiple values from the user, stores them in an array, and calculates their summation.
//  Input               :   Integer (Entered by user)
//  Output              :   Displays the sum of array elements
//  Author              :   Gavade Somanath Vilas
//  Date                :   17/01/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int Arr[4];
    int iCnt = 0, iSum = 0;

    printf("Please Enter the Values: \n");
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    printf("Addition is : %d\n", iSum);

    return 0;
}
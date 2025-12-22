#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name   :   CalculatePercentage
//  Description     :   It is used to calculate Percentage.
//  Input           :   Int, Int
//  Output          :   Float
//  Auther          :   Gavade Somanath Vilas
//  Date            :   22/12/2025
//
/////////////////////////////////////////////////////////////////////////////////////

float CalculatePercentage(int iObtained , int iTotal)
{
    float fPercentage = 0.0f;

    fPercentage = ((float)iObtained / (float)iTotal) * 100;     // Business Logic.

    return fPercentage;
}

/////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Percentage Calculator
//  Description         :   This application is used to calculate percentage.
//
/////////////////////////////////////////////////////////////////////////////////////
int main()
{   
    // Local Input Variable
    int iValue1 = 0;
    int iValue2 = 0;
    float fResult = 0.0f;

    printf("Please enter obtained marks in your exam : \n");
    scanf("%d",&iValue1);

    printf("Please enter the total marks : \n");
    scanf("%d",&iValue2);

    fResult = CalculatePercentage(iValue1, iValue2);        // Function Call

    printf("Your percentage is : %f\n", fResult);

    return 0;
}
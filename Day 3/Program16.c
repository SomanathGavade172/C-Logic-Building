#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name   :   DisplayResult
//  Description     :   Display whether the student is Pass or Fail based on Percentage.
//  Input           :   Float
//  Output          :   None
//  Auther          :   Gavade Somanath Vilas
//  Date            :   22/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayResult(float fPercentage)
{
    // Filter
    if(fPercentage > 100.0f)
    {
        printf("Invalide percentage..! Please enter in the range 0 to 100\n");
        
    }

    if(fPercentage >= 40.0f)
    {
        printf("You are Pass..!\n");
    }
    else
    {
        printf("You are Fail..!\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Pass/Fail Checker
//  Description:        :   This application checks whether a student is Pass or Fail based on percentage.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;        // Local input Variable

    printf("Enter your Percentage : \n");
    scanf("%f", &fValue);

    DisplayResult(fValue);      // Function call

    return 0;
}
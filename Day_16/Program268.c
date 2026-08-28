// *    *   *   *  

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name   :   DisplayTimeTable
//  Description     :   Displays the exam time based on the student’s standard.
//  Input           :   Int
//  Output          :   None
//  Auther          :   Gavade Somanath Vilas
//  Date            :   09/05/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

// Function Defination
void DisplayR()
{
    int iCnt = 1;       // Storage auto class.

    if(iCnt <= 4)
    {
        printf("*\n");
        iCnt++;

        DisplayR();     // Recursive Call.
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Area of Circle
//  Description         :   This application is used to calculate the area of a circle.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    DisplayR();         // Function Call.

    return 0;
}
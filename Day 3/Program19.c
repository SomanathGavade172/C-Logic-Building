#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name   :   DisplayTimeTable
//  Description     :   Displays the exam time based on the student’s standard.
//  Input           :   Int
//  Output          :   None
//  Auther          :   Gavade Somanath Vilas
//  Date            :   22/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

//  Function Defination
void DisplayTimeTable(int iStd)
{
    if(iStd == 8)
    {
        printf("Your exam is at 9.30 AM\n");
    }
    else if(iStd == 9)
    {
        printf("Your exam is at 10.30 AM\n");
    }
    else if(iStd == 10)
    {
        printf("Your exam is at 11.30 Am\n");
    }
    
}

///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Display Exam TimeTable
//  Discription         :   This application displays the exam time based on the standard. 
//
///////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;     // Local input Variable

    printf("Please Enter your Standard : \n");
    scanf("%d", &iValue);

    DisplayTimeTable(iValue);       // Function Call

    return 0;
}
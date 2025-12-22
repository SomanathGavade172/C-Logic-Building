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

// Function Defination
void DisplayTimeTable(int iStd)
{
    switch(iStd)
    {
        case 8 : 
            printf("Your exam is at 9.30 AM\n");
            break;
    
        case 9 :
            printf("Your exam is at 10.30 AM\n");
            break;
    
        case 10 :
            printf("Your exam is at 11.30 Am\n");
            break;
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
    int iValue = 0;

    printf("Please Enter your Standard : \n");
    scanf("%d", &iValue);

    DisplayTimeTable(iValue);       // Fuction Call

    return 0;
}
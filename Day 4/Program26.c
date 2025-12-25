#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name   :   Display
//  Discription     :   Displays "Jay Ganesh..." four times on the console.
//  Input           :   None
//  Output          :   Jay Ganesh...
//  Author          :   Gavade Somanath Vilas
//  Date            :   23/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////

// function Defination
void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :  Display "Jay Ganesh..." 
//  Discription         :  This application display "Jay Ganesh..." four times. 
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    
    Display();      // Function Call

    return 0;
}
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name   :   Display
//  Discription     :   Displays "Jay Ganesh..." 11 times on the console.
//  Input           :   None
//  Output          :   Jay Ganesh...
//  Author          :   Gavade Somanath Vilas
//  Date            :   23/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////

//  Function Defination
void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 11; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :  Display "Jay Ganesh..." 
//  Discription         :  This application display "Jay Ganesh..." 11 times. 
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    Display();      // Function Call

    return 0;
}
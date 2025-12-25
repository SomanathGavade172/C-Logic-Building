#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name       :   Display "Jay Ganesh..." on the console.
//  Description         :   Display "Jay Ganesh..." on the console as many times as specified.
//  Input               :   Int
//  Output              :   Jay Ganesh...
//  Author              :   Gavade Somanath Vilas
//  Date                :   23/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function defination
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :  Display "Jay Ganesh..." 
//  Discription         :  This application displays "Jay Ganesh..." on the console as many times as entered by the user.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iFrequency = 0;

    printf("Enter the frequency : \n");
    scanf("%d", &iFrequency);

    Display(iFrequency);        // Function Call

    return 0;
}
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   DisplayDigit 
//  Description         :   Displays all digits of the given number in reverse order.
//  Input               :   Integer
//  Output              :   None (Displays digits on the screen)
//  Author              :   Gavade Somanath Vilas
//  Date                :   15/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void DisplayDigit(int iNo)
{
    int iDigit = 0;

    //  Updator
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(0 < iNo)
    {
        iDigit = iNo % 10;

        printf("%d\t", iDigit);

        iNo = iNo / 10;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Display Digits.
//  Description         :   This application accepts a number from the user and displays all of its digits in reverse order.
//  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    
    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);       //  Function Call.

    return 0;
}
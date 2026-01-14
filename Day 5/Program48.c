#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   DisplayFactors 
//  Description         :   Displays all factors of the given number excluding the number itself.
//  Input               :   Integer
//  Output              :   None (Displays factors on screen)
//  Author              :   Gavade Somanath Vilas
//  Date                :   14/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Display Factors.
//  Description         :   This application accepts a number from the user and displays all its factors.
//  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    
    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);     //  Function call.
    
    return 0;
}
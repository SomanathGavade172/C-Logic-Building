#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   CheckDivisible 
//  Description         :   Checks whether the given number is divisible by 3 or not.
//  Input               :   Integer
//  Output              :   Boolean (true if divisible by 3, otherwise false)
//  Author              :   Gavade Somanath Vilas
//  Date                :   14/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
bool CheckDivisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Check Divisibility.
//  Description         :   This application accepts a number from the user and checks whether it is divisible by 3.
//  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    bRet = CheckDivisible(iValue);      //  Function Call.

    if(bRet == true)
    {
        printf("%d is divisible by 3\n", iValue);
    }
    else
    {
        printf("%d is not divisible by 3\n", iValue);
    }

    return 0;
}
#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   CheckDivisible 
//  Description         :   Checks whether the given number is divisible by 5 or not.
//  Input               :   Integer
//  Output              :   Boolean (true if divisible by 5, otherwise false)
//  Author              :   Gavade Somanath Vilas
//  Date                :   13/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
bool CheckDivisible(int iNo)
{
    int iResult = 0;

    iResult = iNo % 5;

    if(iResult == 0)
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
//  Description         :   This application accepts a number from the user and checks whether it is divisible by 5.
//  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    bRet = CheckDivisible(iValue);        //  Function Call.

    if(bRet == true)
    {
        printf("%d is divisible by 5\n", iValue);
    }
    else
    {
        printf("%d is not divisible by 5\n", iValue);
    }

    return 0;

}

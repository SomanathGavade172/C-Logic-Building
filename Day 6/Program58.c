#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   CountOddDigits 
//  Description         :   Counts the number of Odd digits in the given number.
//  Input               :   Integer
//  Output              :   Integer (Returns count of Odd digits)
//  Author              :   Gavade Somanath Vilas
//  Date                :   15/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int CountOddDigits(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    //  Updator
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(0 < iNo)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Count Odd Digits.
//  Description         :   This application accepts a number from the user and displays the total count of Odd digits.
//  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    iRet = CountOddDigits(iValue);       //  Function Call.

    printf("Number of odd digits are : %d\n", iRet);

    return 0;
}
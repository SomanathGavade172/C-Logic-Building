#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   CountEvenDigits 
//  Description         :   Counts the number of Even digits in the given number.
//  Input               :   Integer
//  Output              :   Integer (Returns count of Even digits)
//  Author              :   Gavade Somanath Vilas
//  Date                :   15/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int CountEvenDigits(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    //  Updator
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    if(iNo == 0)
    {
        return 1;
    }

    while(0 < iNo)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Count Even Digits.
//  Description         :   This application accepts a number from the user and displays the total count of Even digits.
//  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    iRet = CountEvenDigits(iValue);       //  Function Call.

    printf("Number of even digits are : %d\n", iRet);

    return 0;
}
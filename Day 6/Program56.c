#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   CountDigit 
//  Description         :   Counts the number of digits in the given number.
//  Input               :   Integer
//  Output              :   Integer (Returns count of digits)
//  Author              :   Gavade Somanath Vilas
//  Date                :   15/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int CountDigit(int iNo)
{
    int iCount = 0;

    //  Updator
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(0 < iNo)
    {
        iCount++;

        iNo = iNo / 10;
    }

    return iCount;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Count Digits.
//  Description         :   This application accepts a number from the user and displays the total count of digits.
//  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    iRet = CountDigit(iValue);       //  Function Call.

    printf("Number of digits are : %d\n",iRet);

    return 0;
}
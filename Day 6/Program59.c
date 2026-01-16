#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   SumDigit 
//  Description         :   Calculates the summation of all digits of the given number.
//  Input               :   Integer
//  Output              :   Integer (Returns sum of digits).
//  Author              :   Gavade Somanath Vilas
//  Date                :   15/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int SumDigit(int iNo)
{
    int iDigit = 0, iSum = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iSum = iSum + iDigit;
        
        iNo = iNo / 10;

    }

    return iSum;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Sum of Digits.
//  Description         :   This application accepts a number from the user and displays the summation of its digits.
//  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    iRet = SumDigit(iValue);        //  Function Call

    printf("Summation of Digits are : %d\n", iRet);

    return 0;
}
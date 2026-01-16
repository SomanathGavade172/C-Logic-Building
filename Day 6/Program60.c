#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   SumEvenDigit 
//  Description         :   Calculates the summation of even digits of the given number.
//  Input               :   Integer
//  Output              :   Integer (Returns sum of even digits).
//  Author              :   Gavade Somanath Vilas
//  Date                :   15/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int SumEvenDigit(int iNo)
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

        if(iDigit % 2 == 0)
        {
            iSum = iSum + iDigit;
        }
        
        iNo = iNo / 10;
    }

    return iSum;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Sum of Even Digits.
//  Description         :   This application accepts a number from the user and displays the summation of its Even digits.
//  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    iRet = SumEvenDigit(iValue);        //  Function Call

    printf("Summation of Even Digits is : %d\n", iRet);

    return 0;
}
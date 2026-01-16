#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   Reverse
//  Description         :   Reverses the given number and returns the reversed value.
//  Input               :   Integer
//  Output              :   Integer (Returns reversed number)
//  Author              :   Somanath Gavade
//  Date                :   15/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iRev = iRev * 10 + iDigit;
        
        iNo = iNo / 10;
    }

    return iRev;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Reverse Number
//  Description         :   This application accepts a number from the user and displays its reverse.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);        //  Function Call

    printf("Reverse Number is : %d\n", iRet);

    return 0;
}
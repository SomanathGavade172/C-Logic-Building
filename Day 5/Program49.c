#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   SumFactors 
//  Description         :   Calculates and returns the sum of all factors of the given number, excluding the number itself.
//  Input               :   Integer
//  Output              :   Integer (Returns summation of factors)
//  Author              :   Gavade Somanath Vilas
//  Date                :   14/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    
    return iSum;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Sum of Factors.
//  Description         :   This application accepts a number from the user and displays the summation of all its factors.
//  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    iRet = SumFactors(iValue);     //  Function call.
    
    printf("Summation of Factors : %d\n", iRet);

    return 0;

}

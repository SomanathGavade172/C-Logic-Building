#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name       :   CheckPerfect 
//  Description         :   Calculates and returns the sum of all factors of the given number, excluding the number itself.
//  Input               :   Integer
//  Output              :   Boolean (Returns true if perfect, otherwise false)
//  Author              :   Gavade Somanath Vilas
//  Date                :   14/01/2026
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
bool CheckPerfect(int iNo)
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

    if(iSum == iNo)
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
//  Application Name    :   Check Perfect Number.
//  Description         :   Checks whether the given number is a Perfect Number by comparing the sum of its factors (excluding itself)
//                          with the number.
//  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    bRet = CheckPerfect(iValue);     //  Function call.
    
    if(bRet == true)
    {
        printf("%d is a Perfect Number\n", iValue);
    }
    else
    {
        printf("%d is not a Perfect Number\n", iValue);
    }

    return 0;
}
import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name      : Numbers
//  Description     : Contains function to calculate addition of even factors.
//  Input           : Integer
//  Output          : Returns addition of even factors
//  Author          : Gavade Somanath Vilas
//  Date            : 07/05/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////

class Numbers
{

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : EvenFactors
//  Description     : Calculates addition of even factors of given number.
//  Input           : Integer
//  Output          : Integer
//  Time Complexity : O(N/2)
//
///////////////////////////////////////////////////////////////////////////////////////////////////

    public int EvenFactors(int iNo)
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                if(iCnt % 2 == 0)
                {
                    iSum = iSum + iCnt;
                }
            }
        }

        return iSum;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name      : Program238
//  Description     : This application accepts number from user and displays addition of even factors.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

class Program238
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.println("Enter a Number : ");
        iValue = sobj.nextInt();

        Numbers nobj = new Numbers();

        iRet = nobj.EvenFactors(iValue);

        System.out.println("Addition of Even Factors is : " + iRet);
    }
}
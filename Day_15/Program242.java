import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name      : Digit
//  Description     : Contains function to calculate multiplication of non-zero digits.
//  Input           : Integer
//  Output          : Returns multiplication of non-zero digits
//  Author          : Gavade Somanath Vilas
//  Date            : 07/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Digit
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : MultiplicationDigits
//  Description     : Calculates multiplication of non-zero digits of given number.
//  Input           : Integer
//  Output          : Integer
//  Time Complexity : O(N)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public int MultiplicationDigits(int iNo)
    {
        int iDigit = 0, iMulti = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit != 0)
            {
                iMulti = iMulti * iDigit;
            }            
            
            iNo = iNo / 10;
        }

        return iMulti;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name      : Program242
//  Description     : This application accepts number from user and displays multiplication of non-zero digits.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program242
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.println("Enter a Number : ");
        iValue = sobj.nextInt();

        Digit dobj = new Digit();
        
        iRet = dobj.MultiplicationDigits(iValue);

        System.out.println("Multiplication of digits : " + iRet);

    }
}
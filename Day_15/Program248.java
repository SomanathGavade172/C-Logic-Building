// 883042
// 0 : 1
// 2 : 1
// 3 : 1
// 4 : 1
// 8 : 2

import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name      : Digits
//  Description     : Contains function to count frequency of digits.
//  Input           : Integer
//  Output          : Displays frequency of digits
//  Author          : Gavade Somanath Vilas
//  Date            : 07/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Digits 
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   : CountDigits
//  Description     : Counts frequency of digits in given number.
//  Input           : Integer
//  Output          : Displays frequency of digits
//  Time Complexity : O(N)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public void CountDigits(int iNo)
    {
        int iDigit = 0;
        int Arr[] = new int[10];

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            Arr[iDigit]++;

            iNo = iNo / 10;
        }

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] > 0)
            {
                System.out.println(iCnt + " : " + Arr[iCnt]);
            }
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name      : Program248
//  Description     : This application accepts number from user and displays frequency of digits.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program248
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter a number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();

        dobj.CountDigits(iValue);

    }
}
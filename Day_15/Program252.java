// 883042
// 0 : 1
// 2 : 1
// 3 : 1
// 4 : 1
// 8 : 2

import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name       : Digits
//  Description      : Contains function to count frequency of digits.
//  Input             : Integer
//  Output            : Displays frequency of digits
//  Author            : Gavade Somanath Vilas
//  Date              : 07/05/2026
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Digits
{

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : CountDigits
//  Description      : Counts frequency of digits in given number.
//  Input             : Integer
//  Output            : Displays frequency of digits
//  Time Complexity   : O(N)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public void CountDigits(int iNo)
    {
        int iCount[] = {0,0,0,0,0,0,0,0,0,0};

        int iDigit = 0, i = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iCount[iDigit]++;

            iNo = iNo / 10;
        }

        for(i = 0; i <= 9; i++)
        {
            if(iCount[i] != 0)
            {
                System.out.println("Frequency of " + i + " is : " + iCount[i]);
            }
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name      : Program252
//  Description     : This application accepts number from user and displays frequency of digits.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program252
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
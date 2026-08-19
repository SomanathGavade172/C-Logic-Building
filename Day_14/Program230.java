import java.util.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Addition Program
//  Description      : This program accepts two numbers from user and performs addition.
//  Input            : Two Integers
//  Output           : Displays addition of given numbers
//  Author           : Gavade Somanath Vilas
//  Date             : 23/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program230
{

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Addition
//  Description      : This function performs addition of two integers.
//  Input            : Integer, Integer
//  Output           : Integer
//  Author           : Gavade Somanath Vilas
//  Date             : 23/04/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public static int Addition(int A, int B)
    {
        int iResult = 0;
        iResult = A + B;
        return iResult;
    }

    public static void main(String Arg[])
    {
        int iNo1 = 0, iNo2 = 0, iAns = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second Number : ");
        iNo2 = sobj.nextInt();

        iAns = Addition(iNo1, iNo2);

        System.out.println("Addition is : " + iAns);
    }
}
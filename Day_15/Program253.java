import java.util.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Class Name      : Program253
//  Description     : This application demonstrates creation and traversal of array.
//  Input            : Integer Array
//  Output           : Displays elements of array and size of array
//  Author           : Gavade Somanath Vilas
//  Date             : 08/05/2026
//  Time Complexity  : O(N)
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program253
{
    public static void main(String Arg[])
    {
        int Arr[] = new int[5];

        Arr[0] = 10;
        Arr[1] = 20;
        Arr[2] = 30;
        Arr[3] = 40;
        Arr[4] = 50;

        System.out.println(Arr[0]);
        System.out.println(Arr[1]);
        System.out.println(Arr[2]);
        System.out.println(Arr[3]);
        System.out.println(Arr[4]);

        System.out.println("Size of Array is : " + Arr.length);
    }
}
#include<stdio.h>
#include<string.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    : String Length Display
//  Description         : This application accepts a string from the user and calculates its length using the built-in strlen() function.
//  Input               : Character Array (String)
//  Output              : Integer (Displays length of the string)
//  Author              : Gavade Somanath Vilas
//  Date                : 13/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter a String : \n");
    scanf("%[^'\n']s", Arr);

    iRet = strlen(Arr);           // Function Call.

    printf("String length is : %d\n", iRet);

    return 0;
}

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : strlenX
//  Description      : This function accepts a character pointer and calculates the length of the given string. It traverses the string using pointer increment until it 
//                     reaches the null terminator ('\0').
//  Input            : Character Pointer (String)
//  Output           : Integer (Returns length of the string)
//  Author           : Gavade Somanath Vilas
//  Date             : 14/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int strlenX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        str++;
        iCount++;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Custom String Length Calculation
//  Description      : This application accepts a string from the user and calculates its length using a user-defined function implemented with pointer traversal.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter a String : \n");
    scanf("%[^'\n']s", Arr);

    iRet = strlenX(Arr);           // Function Call.

    printf("String length is : %d\n", iRet);

    return 0;
}

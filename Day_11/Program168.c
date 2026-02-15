/*
    Input  : Abiut CstAfB

    Output : 4

    ABab
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Count
//  Description      : This function accepts a character pointer and counts the number of occurrences of characters 'A', 'a', 'B', and 'b' present in the given string.
//                     It traverses the string using pointer increment until it reaches the null terminator ('\0').
//  Input            : Character Pointer (String)
//  Output           : Integer (Returns count of A, a, B, b characters)
//  Author           : Gavade Somanath Vilas
//  Date             : 14/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int Count(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'a') || (*str == 'B') || (*str == 'b'))
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Count of A and B Characters in String
//  Description      : This application accepts a string from the user and counts the total number of occurrences of characters 'A', 'a', 'B', 
//                     and 'b' using a user-defined function.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter a String : \n");
    scanf("%[^'\n']s", Arr);

    iRet = Count(Arr);           // Function Call.

    printf("Count of A, a, B, b characters is : %d\n", iRet);

    return 0;
}

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Count
//  Description      : This function accepts a character pointer and counts the number of occurrences of character 'm' present in the given string.
//                     It traverses the string using pointer increment until it reaches the null terminator ('\0').
//  Input            : Character Pointer (String)
//  Output           : Integer (Returns count of character 'm')
//  Author           : Gavade Somanath Vilas
//  Date             : 18/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int Count(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'm')
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Character Occurrence Count
//  Description      : This application accepts a string from the user and counts the number of times character 'm'
//                     occurs in it using a user-defined function implemented with pointer traversal.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter a String : \n");
    scanf("%[^'\n']s", Arr);

    iRet = Count(Arr);           // Function Call.

    printf("Number of m is : %d\n", iRet);

    return 0;
}

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Count
//  Description      : This function accepts a character pointer and one character. It counts the number of occurrences of the given character in the string.
//                     It traverses the string using pointer increment until it reaches the null terminator ('\0').
//  Input            : Character Pointer (String), Character
//  Output           : Integer (Returns count of given character)
//  Author           : Gavade Somanath Vilas
//  Date             : 18/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int Count(char *str, char Ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == Ch)
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
//  Description      : This application accepts a string from the user and counts the number of times a specific character
//                     occurs in the string using a user-defined function implemented with pointer traversal.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    int iRet = 0;
    char cValue = '\0';

    printf("Enter a String : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter a character : \n");
    scanf("%c", &cValue);   // Space added before %c

    iRet = Count(Arr, cValue);           // Function Call.

    printf("Number of '%c' is : %d\n", cValue, iRet);

    return 0;
}

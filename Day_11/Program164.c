#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : CountSpace
//  Description      : This function accepts a character pointer and counts the number of white spaces
//                     present in the given string.
//                     It traverses the string using pointer increment until it reaches the null terminator ('\0').
//  Input            : Character Pointer (String)
//  Output           : Integer (Returns count of spaces)
//  Author           : Gavade Somanath Vilas
//  Date             : 14/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int CountSpace(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Space Count in String
//  Description      : This application accepts a string from the user and counts the number of spaces present in it using a user-defined function implemented 
//                     with pointer traversal.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter a String : \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountSpace(Arr);           // Function Call.

    printf("Number of Spaces are : %d\n", iRet);

    return 0;
}

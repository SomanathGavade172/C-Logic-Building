#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Count
//  Description      : This function accepts a character pointer (string) and a character. It checks whether the given character is present in the string.
//                     The function traverses the string using pointer increment until it reaches the null terminator ('\0').
//  Input            : Character Pointer (String), Character
//  Output           : Boolean (Returns TRUE if character is found, otherwise FALSE)
//  Author           : Gavade Somanath Vilas
//  Date             : 21/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
BOOL Count(char *str, char Ch)
{
    BOOL bFlag = FALSE;

    while(*str != '\0')
    {
        if(*str == Ch)
        {
            bFlag = TRUE;
            break;
        }
        str++;
    }
    return bFlag;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Character Presence Checker
//  Description      : This application accepts a string from the user and checks whether a specific character is present in the string using a user-defined function 
//                     implemented with pointer traversal.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    BOOL bRet = FALSE;
    char cValue = '\0';

    printf("Enter a String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter a character : \n");
    scanf(" %c", &cValue);   // Space added before %c to ignore previous newline

    bRet = Count(Arr, cValue);           // Function Call

    if(bRet == TRUE)
    {
        printf("Character is present\n");
    }
    else
    {
        printf("Character is not present\n");
    }

    return 0;
}

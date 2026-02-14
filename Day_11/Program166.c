#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : CountCapital
//  Description      : This function accepts a character pointer and counts the number of capital letters present in the given string.
//                     It traverses the string using pointer increment until it reaches the null terminator ('\0').
//  Input            : Character Pointer (String)
//  Output           : Integer (Returns count of capital letters)
//  Author           : Gavade Somanath Vilas
//  Date             : 14/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 65) && (*str <= 90))
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Capital Letter Count in String
//  Description      : This application accepts a string from the user and counts the number of capital letters present in it using a user-defined function 
//                     implemented with pointer traversal.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter a String : \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountCapital(Arr);           // Function Call.

    printf("Number of Capital Letters are : %d\n", iRet);

    return 0;
}

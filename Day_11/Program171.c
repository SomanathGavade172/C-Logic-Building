#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : CountVowels
//  Description      : This function accepts a character pointer and counts the number of vowels (A, E, I, O, U, a, e, i, o, u)
//                     present in the given string. It traverses the string using pointer increment until it reaches the null terminator ('\0').
//  Input            : Character Pointer (String)
//  Output           : Integer (Returns count of vowels)
//  Author           : Gavade Somanath Vilas
//  Date             : 18/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
int CountVowels(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') || (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Vowel Count in String
//  Description      : This application accepts a string from the user and counts the total number of vowels
//                     (both uppercase and lowercase) present in it using a user-defined function.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter a String : \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountVowels(Arr);           // Function Call.

    printf("Number of Vowels are : %d\n", iRet);

    return 0;
}

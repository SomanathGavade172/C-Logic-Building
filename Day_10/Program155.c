#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : CountSmall
//  Description      : This function accepts a character pointer and counts the number of lowercase letters
//                     (small characters) present in the given string.
//                     It checks characters between ASCII values 97 ('a') and 122 ('z').
//  Input            : Character Pointer (String)
//  Output           : Integer (Returns count of lowercase letters)
//  Author           : Gavade Somanath Vilas
//  Date             : 10/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountSmall(char *ptr)
{
    int iCount = 0;

    while(*ptr != '\0')
    {
        if(*ptr >= 'a' && *ptr <= 'z')
        {
            iCount++;
        }        
        ptr++;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Count of Small Letters Using Pointer
//  Description      : This application accepts a string from the user and counts the number of lowercase letters present in the string using a function 
//                     implemented with pointer traversal.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter your Name : \n");
    scanf("%[^\n]s", Arr);       // Reads input until Enter is pressed

    iRet = CountSmall(Arr);

    printf("count of small letters is : %d\n", iRet);
 
    return 0;
}

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : strlenX
//  Description      : This function accepts a character pointer and counts the number of occurrences of the character
//                     'a' in the given string by traversing until the null terminator ('\0') is reached.
//  Input            : Character Pointer (String)
//  Output           : Integer (Returns count of character 'a')
//  Author           : Gavade Somanath Vilas
//  Date             : 10/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int strlenX(char *ptr)
{
    int iCount = 0;

    while(*ptr != '\0')
    {
        if(*ptr == 'a')
        {
            iCount++;
        }        
        ptr++;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Character Occurrence Count Using Pointer
//  Description      : This application accepts a string from the user and counts the number of times the character 'a' appears in the string using a custom function
//                     implemented with pointer traversal.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter your Name : \n");
    scanf("%[^\n]s", Arr);       // Reads input until Enter is pressed

    iRet = strlenX(Arr);

    printf("count of a is : %d\n", iRet);
 
    return 0;
}

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : strlenX
//  Description      : This function accepts a character pointer and calculates the length of the given string
//                     by counting characters until the null terminator ('\0') is reached.
//  Input            : Character Pointer (String)
//  Output           : Integer (Returns length of the string)
//  Author           : Gavade Somanath Vilas
//  Date             : 10/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int strlenX(char *ptr)
{
    int iCount = 0;

    // Check condition
    while(*ptr != '\0')
    {
        iCount++;
        ptr++;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : String Length Calculation Using Pointer
//  Description      : This application accepts a string from the user and calculates its length using a custom strlenX function implemented with pointer traversal.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter your Name : \n");
    scanf("%[^\n]s", Arr);       // Reads input until Enter is pressed

    iRet = strlenX(Arr);

    printf("Length of String is : %d\n", iRet);
 
    return 0;
}


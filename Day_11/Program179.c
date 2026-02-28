#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : struprX
//  Description      : This function accepts a character pointer (string). It converts all lowercase characters into uppercase characters.
//                     The function traverses the string using pointer increment until it reaches the null terminator ('\0').
//  Input            : Character Pointer (String)
//  Output           : Void (String gets modified directly)
//  Author           : Gavade Somanath Vilas
//  Date             : 21/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void struprX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : String Uppercase Conversion Application
//  Description      : This application accepts a string from the user and converts all lowercase characters into uppercase characters
//                     using a user-defined function implemented with pointer traversal.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];

    printf("Enter a String : \n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);           // Function Call

    printf("String after Updation is : %s\n", Arr);

    return 0;
}
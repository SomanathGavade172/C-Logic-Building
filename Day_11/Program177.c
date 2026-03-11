#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : Update
//  Description      : This function accepts a character pointer (string). It replaces all occurrences of character 'a' with character 'd'.
//                     The function traverses the string using pointer increment until it reaches the null terminator ('\0').
//  Input            : Character Pointer (String)
//  Output           : Void (String gets modified directly)
//  Author           : Gavade Somanath Vilas
//  Date             : 21/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void Update(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a')
        {
            *str = 'd';             // Call by address
        }
        str++;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : Character Replacement Application
//  Description      : This application accepts a string from the user and replaces all occurrences of character 'a' with character 'd'
//                     using a user-defined function implemented with pointer traversal.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];

    printf("Enter a String : \n");
    scanf("%[^'\n']s",Arr);

    Update(Arr);           // Function Call

    printf("String after Updation is : %s\n", Arr);

    return 0;
}
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : strtoggleX
//  Description      : This function accepts a character pointer (string). It converts uppercase characters into lowercase and lowercase characters into uppercase. 
//                     The function traverses the string using pointer increment until it reaches the null terminator ('\0').
//  Input            : Character Pointer (String)
//  Output           : Void (String gets modified directly)
//  Author           : Gavade Somanath Vilas
//  Date             : 21/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Function Definition
void strtoggleX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else
        {
            *str = *str + 32;
        }
        str++;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : String Toggle Case Application
//  Description      : This application accepts a string from the user and toggles the case of each alphabet character using a user-defined function 
//                     implemented with pointer traversal.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];

    printf("Enter a String : \n");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);           // Function Call

    printf("String after Updation is : %s\n", Arr);

    return 0;
}
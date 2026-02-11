#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : String Input and Character Display Using Pointer
//  Description      : This program accepts a name from the user using a character array and displays individual characters using a pointer.
//                     It demonstrates how to take string input using scanf scanset to read input until newline.
//  Input            : String (User Name)
//  Output           : NONE (Displays characters of the entered name one by one)
//  Author           : Gavade Somanath Vilas
//  Date             : 10/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    char *ptr = Arr;

    printf("Enter your Name : \n");
    scanf("%[^'\n']s", Arr);       // Reads input until Enter is pressed

    // Check condition
    while(*ptr != '\0')
    {
        printf("%c\n", *ptr);
        ptr++;
    }
 
    return 0;
}


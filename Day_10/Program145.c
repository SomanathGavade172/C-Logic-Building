#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : String Character Display
//  Description      : This program demonstrates how to store a string in a character array and how to access each character individually using array indexing.
//  Input            : None
//  Output           : Prints the complete string and its characters separately
//  Author           : Gavade Somanath Vilas
//  Date             : 06/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Name[] = "Mumbai";

    // Print complete string
    printf("String is : %s\n", Name);

    // Print each character of the string
    printf("Characters are :\n");
    printf("%c\n", Name[0]);
    printf("%c\n", Name[1]);
    printf("%c\n", Name[2]);
    printf("%c\n", Name[3]);
 
    return 0;
}

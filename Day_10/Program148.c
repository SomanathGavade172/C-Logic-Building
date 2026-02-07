#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name : String Input and Display
//  Description      : This program accepts a name from the user using a character array and displays it on the screen.
//                     It demonstrates how to take string input using scanf scanset to read input until newline.
//  Input            : String (User Name)
//  Output           : Displays the entered name
//  Author           : Gavade Somanath Vilas
//  Date             : 06/02/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];

    printf("Enter your Name : \n");
    scanf("%[^\n]s", Arr);       // Reads input until Enter is pressed

    printf("Name is : %s\n", Arr);
 
    return 0;
}

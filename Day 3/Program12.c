#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CircleArea
//  Description     :   It is Used to calculate Area of a Circle.
//  Input           :   Float
//  Output          :   Float
//  Author          :   Gavade Somanath Vilas
//  Date            :   22/12/2025
//        
//////////////////////////////////////////////////////////////////////////////////////////

float CircleArea(float fRadius)
{
    float fArea = 0.0f;

    fArea = 3.14 * fRadius * fRadius;       // Business Logic

    return fArea;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Area of Circle
//  Description         :   This application calculates the area of a circle.
//
//////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    // Local Input Variable.
    float fValue = 0.0f;
    float fResult = 0.0f;

    printf("Enter Radius of a Circle : \n");
    scanf("%f", &fValue);

    fResult = CircleArea(fValue);       // Function Call

    printf("Area of Circle is : %f\n", fResult);

    return 0;
}
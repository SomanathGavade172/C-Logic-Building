//////////////////////////////////////////////////////////////////////////////////////////
//
//  Application Name    :   Area of Circle
//  Description         :   This application is used to calculate the area of a circle.
//
//////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    // Local Input Variable.
    float fRadius = 0.0f;
    float fArea = 0.0f;

    printf("Enter Radius of a Circle : \n");
    scanf("%f", &fRadius);

    fArea = 3.14 * fRadius * fRadius;   // Business Logic.

    printf("Area of Circle is : %f\n", fArea);

    return 0;
}
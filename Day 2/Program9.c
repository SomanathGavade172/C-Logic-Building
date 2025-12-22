#include<stdio.h>

float Addition(float fValue1, float fValue2)
{
    float fAdd = 0.0f;
    fAdd = fValue1 + fValue2;   // Business Logic
    return fAdd;
}

int main()
{
    float fNo1 = 0.0f;          // Local variable for Input
    float fNo2 =0.0f;
    float fAns = 0.0f;

    printf("Enter a Number : ");
    scanf("%f", &fNo1);

    printf("Enter a Second Number : ");
    scanf("%f", &fNo2);

    fAns = Addition(fNo1, fNo2);        // Function Call

    printf("Addition is : %f", fAns);

    return 0;
}
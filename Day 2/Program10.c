#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name   :  Addition
//  Description     :  It is used to perform Addition of 2 float values
//  Input           :  Float, Float
//  Output          :  Float
//  Author          :  Gavade Somanath Vilas()
//  Date            :  22/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

float Addition(float fValue1, float fValue2)
{
    float fAdd = 0.0f;

    // Updator
    if(fValue1 < 0.0f)
    {
        fValue1 = -(fValue1);       
    }

    // Updator
    if(fValue2 < 0.0f)
    {
        fValue2 = -(fValue2);
    }

    fAdd = fValue1 + fValue2;   // Business Logic
    return fAdd;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
//  This application is used to perform addition of two numbers.
//
//////////////////////////////////////////////////////////////////////////////////////////

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

/*
    Step5 : Test the program
    
    Testcase 1
    Enter first number :            
    10.0
    Enter second number : 
    20.0
    Addition is : 30.000000
    
    Testcase 2
    Enter first number : 
    -10.0
    Enter second number : 
    20.0
    Addition is : 30.000000
    
    Testcase 3
    Enter first number : 
    10.0
    Enter second number : 
    -20.0
    Addition is : 30.000000
    
    Testcase 4
    Enter first number : 
    -10.0
    Enter second number : 
    -20.0
    Addition is : 30.000000
*/
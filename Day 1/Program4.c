#include<stdio.h>

int main()
{
    // Local Variables
    int iNo1 = 0;
    int iNo2 = 0;
    int iAns = 0;

    printf("Enter First Number : ");
    scanf("%d", &iNo1);

    printf("Enter Second Number : ");
    scanf("%d", &iNo2);

    iAns = iNo1 + iNo2;

    printf("Addition is : %d\n", iAns);

    return 0;
}

// Dynamic Input Program
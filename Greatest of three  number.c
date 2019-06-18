#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("\nEnter the second number: ");
    scanf("%d", &num2);

    printf("\nEnter the third number: ");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("\nFirst number is largest.\n");
        }
        else
        {
            printf("\nThird number is largest.\n");
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("\nSecond number is largest.\n");
        }
        else
        {
            printf("\nThird number is largest.\n");
        }
    }

    return 0;
}

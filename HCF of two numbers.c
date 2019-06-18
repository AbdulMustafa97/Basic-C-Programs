#include <stdio.h>

int main()
{
    int i, num1, num2, hcf = 1, min;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("\nEnter the second number: ");
    scanf("%d", &num2);

    if (num1 < num2)
    {
        min = num1;
    }
    else
    {
        min = num2;
    }

    for (i = 1; i <= min; i++)
    {
        if (num1 % i == 0)
        {
            if (num2 % i == 0)
            {
                hcf = i;
            }
        }
    }

    printf("\nThe HCF of %d and %d is %d", num1, num2, hcf);

    return 0;
}

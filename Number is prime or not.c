#include <stdio.h>

int main()
{
    int i, num, count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("\nPrime number!\n");
    }
    else
    {
        printf("\nNot a prime number!\num");
    }

    return 0;
}

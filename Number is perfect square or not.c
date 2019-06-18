#include <stdio.h>

int main()
{
    int i, num, flag = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (i = 0; i <= num; i++)
    {
        if (num == i * i)
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        printf("\nPerfect square!\n");
    }
    else
    {
        printf("\nNot a perfect square!\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int i;
    char player1, player2, playmore;

    printf("Rock:r, Paper:p, scissor:s, Yes:y, No:n\n");

    while (playmore != 'n')
    {
        printf("\nEnter the player 1 result: ");
        scanf("\n%c", &player1);

        printf("\nEnter the player 2 result: ");
        scanf("\n%c", &player2);

        if (player1 == 'r')
        {
            if (player2 == 'p')
            {
                printf("\nPlayer 2 won.\n");
            }
            else if (player2 == 's')
            {
                printf("\nPlayer 1 won.\n");
            }
            else
            {
                printf("\nDraw!\n");
            }
        }
        else if (player1 == 'p')
        {
            if (player2 == 'r')
            {
                printf("\nPlayer 1 won.\n");
            }
            else if (player2 == 's')
            {
                printf("\nPlayer 2 won.\n");
            }
            else
            {
                printf("\nDraw.\n");
            }
        }
        else if (player1 == 's')
        {
            if (player2 == 'r')
            {
                printf("\nPlayer 2 won!\n");
            }
            else if (player2 == 'p')
            {
                printf("\nPlayer 1 won!\n");
            }
            else
            {
                printf("\nDraw!\n");
            }
        }
        else
        {
            printf("\nEnter the correct alphabet.\n");
        }

        printf("\nPlaymore? : ");
        scanf("\n%c", &playmore);
    }

    return 0;
}

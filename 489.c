#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_GUESS 7
char answer[100];
char guess[100];

int main(int argc, char const *argv[])
{
    int round = 0;
    scanf("%d", &round);
    while(round != -1){
        getchar();
        printf("Round %d\n", round);
        fgets(answer, 100, stdin);
        fgets(guess, 100, stdin);
        int wrong_guess = 0;
        int right;
        for (int i = 0; i < strlen(guess); ++i)
        {
            int find = 0;
            right = 1;
            for (int j = 0; j < strlen(answer); ++j)
            {
                if (answer[j] == guess[i])
                {
                    answer[j] = ' ';
                    find = 1;
                }
            }

            if (!find)
                wrong_guess++;

            if (wrong_guess == MAX_GUESS)
            {
                printf("You lose.\n");
                break;
            }
            for (int j = 0; j < strlen(answer); ++j)
            {
                if (islower(answer[j]))
                    right = 0;
            }

            if (right)
            {
                printf("You win.\n");
                break;
            }

        }
        if (!right && wrong_guess != MAX_GUESS)
        {
            printf("You chickened out.\n");
        }

        scanf("%d", &round);
    }

    return 0;
}
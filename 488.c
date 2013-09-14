#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num_of_cases = 0;
    scanf("%d", &num_of_cases);
    getchar();
    getchar();
    for (int i = 0; i < num_of_cases; ++i)
    {
        int height, frequency;
        scanf("%d", &height);
        scanf("%d", &frequency);
        for (int j = 1; j <= frequency; ++j)
        {
            for (int k = 1; k <= height; ++k)
            {
                for (int l = 0; l < k; ++l)
                {
                    printf("%d", k);;
                }
                putchar('\n');
            }
            for (int k = height - 1; k >= 1; --k)
            {
                for (int l = 0; l < k; ++l)
                {
                    printf("%d", k);
                }
                putchar('\n');

            }
            if(j != frequency)
                putchar('\n');
        }
    }
    return 0;
}
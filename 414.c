#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n = 0;

    while(scanf("%d", &n) != EOF && n != 0)
    {
        int min = 100;
        int sum = 0;
        int num_b = 0;
        getchar();
        for (int i = 0; i < n; ++i)
        {
            char s[30];
            fgets(s, 30, stdin);
            num_b = 0;
            for (int i = 0; i < strlen(s); ++i)
            {
                if (s[i] == ' ')
                {
                    sum++;
                    num_b++;
                }
            }
            if (num_b < min)
                min = num_b;

        }
        printf("%d\n", sum - n * min);
    }
        return 0;
}           
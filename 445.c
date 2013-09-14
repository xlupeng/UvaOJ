#include <stdio.h>
#include <string.h>
#include <ctype.h>

char s[150];
int main(int argc, char const *argv[])
{
    for (; fgets(s, 150, stdin);)
    {
        int times = 0;
        for (int i = 0; i < strlen(s); ++i)
        {
            if (isdigit(s[i]))
            {
                times += s[i] - '0';
            }
            else if (s[i] == '!')
            {
                printf("\n");
            }
            else if (s[i] == 'b')
            {
                for (int j = 0; j < times; ++j)
                {
                    printf(" ");
                }
                times = 0;
            }
            else
            {

                for (int j = 0; j < times; ++j)
                {
                    printf("%c", s[i]);
                }
                times = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
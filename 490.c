#include <stdio.h>
#include <string.h>

char s[110][110];

int main(int argc, char const *argv[])
{

    int num = 0;
    int max = 0;
    int min = 0;
    for (; fgets(s[num], 110, stdin); ++num)
    {
        if (strlen(s[num]) > max)
        {
            max = strlen(s[num]);
        }
    }

    for (int i = 0; i < max - 1; i++)
    {
        for (int j = 0; j < num; ++j)
        {
            if (i < strlen(s[j]) - 1)  
                printf("%c", s[j][i]);  
            else  
                printf(" ");         
        }
        printf("\n");
    }
    return 0;
}
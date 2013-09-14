#include <stdio.h>
#include <string.h>
#include <ctype.h>

char s[1000];
int main(int argc, char const *argv[])
{

    while(fgets(s, 1000, stdin)){
        int j = 0;
        for (int i = 0; i < strlen(s); ++i)
        {
            if (!isalpha(s[i]) && (isalpha(s[i - 1])) )
            {
                j++;
            }
        }
        printf("%d\n", j);
    }
    return 0;
}
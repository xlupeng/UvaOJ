#include <stdio.h>
#include <string.h>

char s[30];
char get_reverse(char c);
int main(int argc, char const *argv[])
{

    while(scanf("%s", s) == 1){
        int is_palindrome = 1;
        int is_mirror = 1;
        for (int i = 0; i <= strlen(s) / 2; ++i)
        {
            if (s[i] != s[strlen(s) - 1 - i])
            {
                is_palindrome = 0;
            }
            if (s[i] != get_reverse(s[strlen(s) - 1 - i]))
            {
                is_mirror = 0;
            }
        }
        if (is_palindrome && !is_mirror)
        {
            printf("%s -- is a regular palindrome.\n", s);
        }
        else if (!is_palindrome && !is_mirror)
        {
            printf("%s -- is not a palindrome.\n", s);
        }
        else if (!is_palindrome && is_mirror)
        {
            printf("%s -- is a mirrored string.\n", s);
        }
        else
            printf("%s -- is a mirrored palindrome.\n", s);
        printf("\n");
    }
    return 0;
}

char get_reverse(char c){
    switch(c){
        case 'A': case 'H': case 'I': case 'M': case 'O': 
        case 'T': case 'U': case 'V': case 'W': case 'X': 
        case 'Y': case '1': case '8':
            return c;
        case 'E':
            return '3';
        case 'J':
            return 'L';
        case 'L':
            return 'J';
        case 'S':
            return '2';
        case 'Z':
            return '5';
        case '2':
            return 'S';
        case '3':
            return 'E';
        case '5':
            return 'Z';
        default:
            return ' ';
        }
}
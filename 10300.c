#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int f = 0;
        scanf("%d", &f);
        int result = 0;
        for (int j = 0; j < f; j++)
        {
            int a = 0,b = 0, c = 0;
            scanf("%d%d%d", &a, &b, &c);
            result += a * c;
        }
        printf("%d\n", result);
    }
    return 0;
}


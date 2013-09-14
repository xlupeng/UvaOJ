#include <stdio.h>
#include <string.h>

char t[1000];
int main(int argc, char const *argv[])
{

    while(scanf("%s",t) != EOF){
        for (int i = 0; i < strlen(t); ++i)
        {
                t[i] = t[i] - 7;
        }
        printf("%s\n",t);
    }


    return 0;
}
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int turn = 0;
    while(1){
        int a;
        int limit;
        turn++;
        scanf("%d %d", &a, &limit);
        long long b = a;
        if (a < 0 && limit < 0)
            break;
        int terms = 0;
        while(1){
            if (b == 1){
                terms++;
                break;
            }
            else if (b % 2 == 0){
                b = b / 2;
                terms++;
            }
            else{
                terms++;
                if(b * 3 + 1 > limit)
                    break;
                else
                    b = b * 3 + 1;
            }
        }

        printf("Case %d: A = %d, limit = %d, number of terms = %d\n", turn, a, limit, terms);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

char grid[60][60];
char answer[30][60];
int main(int argc, char const *argv[])
{
    int turn;
    scanf("%d", &turn);
    // printf("the turn is %d\n", turn);
    for (int i = 0; i < turn; ++i)
    {
        getchar();
        int row = 1, column = 1;
        scanf("%d %d", &row, &column);
        // printf("%d %d row column\n", row, column);
        for (int j = 0; j < row; ++j)
        {
            scanf("%s", grid[j]);

        }
        // for (int j = 0; j < row; ++j)
        // {
        //     printf("%s\n", grid[j]);
        // }
        int answer_num = 0;
        scanf("%d", &answer_num);
        for (int j = 0; j < answer_num; ++j)
        {
            scanf("%s", answer[j]);
        }

        // for (int j = 0; j < answer_num; ++j)
        // {
        //     printf("%s\n", answer[j]);
        // }
        for (int j = 0; j < answer_num; ++j)
        {
            int len = strlen(answer[j]);
            int find = 0;
            for (int k = 0; k < row; ++k)
            {
                for (int l = 0; l < column; ++l)
                {
                    int left_to_right = 0;
                    int right_to_left = 0;
                    int up_to_down = 0;
                    int down_to_up = 0;
                    if (l + len - 1 <= column)
                    {
                        left_to_right = 1;
                        for (int m = 0; m < len; ++m)
                        {
                            if (grid[k][l+m] != answer[k][l+m]){
                                find
                            }
                        }
                    }
                    if (l - len + 1 >= 0)
                    {
                        right_to_left = 1;
                        //横着从右往左查
                    }
                    if (k + len - 1 <= row)
                    {
                        up_to_down = 1;
                        //竖着从上往下查
                    }
                    if (k - len + 1 >= 0)
                    {
                        down_to_up = 1;
                        //竖着从下往上查
                    }
                    if (left_to_right && up_to_down)
                    {
                        //向右下
                    }
                    if (left_to_right && down_to_up)
                    {
                        //向右上
                    }
                    if (right_to_left && up_to_down)
                    {
                        //向左下
                    }
                    if (right_to_left && down_to_up)
                    {
                        //向左上
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}


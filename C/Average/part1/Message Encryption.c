#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000];
    char arr[100][100];
    scanf("%s", str);
    int col, count = 0, j;
    scanf("%d", &col);
    int row = strlen(str) / col;

    for (int i = 0; i < row; i++)
    {
        if (i % 2 == 0)
            for (j = 0; j < col; j++)
            {
                arr[i][j] = str[count];
                count++;
            }

        else
            for (j = col - 1; j >= 0; j--)
            {
                arr[i][j] = str[count];
                count++;
            }
    }

    for (int i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%c", arr[j][i]);
        }
    }
}
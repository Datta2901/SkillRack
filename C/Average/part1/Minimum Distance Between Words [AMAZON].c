#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sen[50][50], w1[20], w2[20];
    int i = 0, index1[50], index2[50], l = 0, m = 0, min = 100;
    while (scanf("%s", sen[i]) > 0)
    {
        i++;
    }
    strcpy(w1, sen[i - 2]);
    strcpy(w2, sen[i - 1]);
    i = i - 2;
    for (int j = 0; j < i; j++)
    {
        if (strcmp(w1, sen[j]) == 0)
        {
            index1[l++] = j;
        }
        else if (strcmp(w2, sen[j]) == 0)
        {
            index2[m++] = j;
        }
    }
    if (m == 0)
    {
        printf("%d", l - 2);
    }
    else
    {
        for (int j = 0; j < l; j++)
        {
            for (int k = 0; k < m; k++)
            {
                signed int diff;
                diff = index1[j] - index2[k];
                if (diff < 0)
                {
                    diff = 0 - diff;
                }
                if (diff < min)
                {
                    min = diff;
                }
            }
        }
        printf("%d", min);
    }
}
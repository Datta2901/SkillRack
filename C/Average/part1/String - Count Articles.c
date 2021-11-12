#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[100][1000];
    int i = 0, flag = 0, countr = 0;
    while (scanf("%[^  ]\t", str[i]) > 0)
    {
        i++;
    }
    int g = 0;
    for (int j = 0; j < i; j++)
    {
        while (str[j][g] != '\0')
        {
            if (str[j][g] == ',' || str[j][g] == '.')
            {
                str[j][g] = '\0';
                flag = j;
            }
            g++;
        }
        g = 0;
    }
    if (flag != i - 1)
    {
        str[i - 1][strlen(str[i - 1]) - 1] = '\0';
    }
    for (int j = 0; j < i; j++){
        if (strcmp(str[j], "the") == 0)
        {
            countr++;
        }
        if (strcmp(str[j], "a") == 0)
        {
            countr++;
        }
        if (strcmp(str[j], "an") == 0)
        {

            countr++;
        }
    }
printf("%d", countr);

}

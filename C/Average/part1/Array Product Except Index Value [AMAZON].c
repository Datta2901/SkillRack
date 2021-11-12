#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100], i = 0;
    while (scanf("%d", &arr[i]) > 0)
    {
        i++;
    }
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i = 0; i < n; i++){
    //     printf("%d ",arr[i]);
    // }
    // printf("\n");

    for (int j = 0; j < i; j++)
    {
        int mul = 1;
        for (int k = 0; k < i; k++)
        {
            if (j != k)
            {
                mul = mul * arr[k];
            }
        }
        printf("%d ", mul);
    }
}
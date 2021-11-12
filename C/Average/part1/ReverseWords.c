#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[20][100];
    int i=0;
    while(scanf("%s ",s[i])>0)
    {
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%s ",s[j]);
    }
    return 0;
}
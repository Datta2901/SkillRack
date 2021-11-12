#include<stdio.h>

int main(){
    char s[100];
    scanf("%s",s);
    int n = strlen(s);
    for(int i = 0; i < n; i++){
        int l = n - i - 1;
        for(int j = 0; j < n; j++){
            if(i == j){
               printf("%c",s[j]);
            }else if(j == l){
                 printf("%c",s[j]);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}


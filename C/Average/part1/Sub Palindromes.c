#include<stdio.h>
#include<stdlib.h>

int main(){
    char s[300];
    scanf("%s",s);

    int n = strlen(s); 
   
    int answer[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            answer[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        answer[i][i] = 1;
    }

    
    int count = 0;
    for(int i = n - 2; i >= 0; i--){
        for(int j = i + 1; j < n; j++){
            // size 2
            if(s[i] == s[j] && j - i == 1){
                answer[i][j] = 1;
                count++;
            }else if(answer[i + 1][j - 1] && s[i] == s[j]){ // greater than 2
                answer[i][j] = 1;
                count++;
            }
        }        
    }

    // for(auto i : answer){
    //     for(auto j : i){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    printf("%d",count);
    return 0;
}
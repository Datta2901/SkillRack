
#include<stdio.h>
#include<stdlib.h>

int getAnswer(int a,int b){
    if(a > b){
        return 3;
    }else if(a == b){
        return 1;
    }else{
        return 0;
    }
}

int min(int a,int b){
    if(a > b){
        return b;
    }
    return a;
}

int main(int argc, char** argv)
{
    int s[100],s1[100],s2[100];
    int ss = 0,si = 0,sj = 0;
    while(scanf("%d",&s[ss]) > 0){
        ss++;
    }
    for(int i = 0; i < ss; i++){
        if(i < ss / 2){
            s1[i] = s[i];
        }else{
            s2[sj++] = s[i];
        }
        // printf("%d ",s[i]);
    }
    // for(int i = 0; i < ss/2; i++){
    //     printf("%d ",s2[i]);
    // }
    int a = 0,b = 0;
    for(int i = 0; i < ss / 2; i++){
        a += getAnswer(s1[i],s2[i]);
        b += getAnswer(s2[i],s1[i]);
    }
    printf("%d %d",a,b);
}
 
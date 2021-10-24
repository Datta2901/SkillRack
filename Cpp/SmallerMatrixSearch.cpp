#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[100][100], b[100][100];
    int i, j, m, n, count = 0, there = 0, k, l, x, y;
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++){
        for (j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cin >> b[i][j];
        }
    }
    for (i = 0; i < m; i++){
        for (j = 0; j < m; j++){
            if (a[i][j] == b[0][0]){
                for (x = i, k = 0; x < i + n, k < n; x++, k++){
                    for (y = j, l = 0; y < j + n, l < n; y++, l++){
                        if (a[x][y] == b[k][l]){
                            count++;
                        }
                    }
                }
            }
            if (count == n * n){
                there = 1;
            }
            count = 0;
        }
    }
    if(there == 1){
        cout << "TRUE" << endl;
    }else{
        cout << "FALSE" << endl;
    }
}
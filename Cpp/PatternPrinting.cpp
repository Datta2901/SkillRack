#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int diff = n, level = 0;
    int a;
    for (int i = 0; i < n; i++){
        int num = 1 + level;
        a = diff;
        while (a > level){
            cout << num << " ";
            num += a;
            a--;
        }
        level++;
        cout << endl;
    }
}
// 5

// 1 6 10 13 15 
// 2 7 11 14 
// 3 8 12 
// 4 9 
// 5
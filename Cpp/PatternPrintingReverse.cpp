#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int start = n * (n + 1) /2,diff = n, level = 0;
    int a;
    for (int i = 0; i < n; i++){
        int num = start - i;
        a = diff;
        while (a > level){
            cout << num << " ";
            num -= a;
            a--;
        }
        level++;
        cout << endl;
    }
}

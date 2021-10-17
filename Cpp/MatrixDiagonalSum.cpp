#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin >> n;
    int sum = 0,level = 0;
    vector<vector<int>>num(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int a;
            cin >> a;
            num[i].push_back(a);
        }
    }
    int row = 0;
    for(int i = n - 1; i >= 0; i--){
        sum += num[i][i];
        if(i + row == n - 1 && i != row){
            sum += num[row][i];
        }  
        row++; 
    }
    cout << sum << endl;

}
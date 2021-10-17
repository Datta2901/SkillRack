#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int size;
    cin >> size;
    vector<vector<int> > num(size);
    int sum1 = 0,sum2 = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            int a;
            cin >> a;
            num[i].push_back(a);
        }
    }
    
    int row = 0;
    for(int i = size - 1; i >= 0; i--){
        sum1 += num[i][i];
        if(i + row == size - 1){
            sum2 += num[row][i];
            row++;
        }
    }
    cout << abs(abs(sum1) - abs(sum2)) << endl;

}
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    vector<vector<bool> > answer(n,vector<bool>(n,false));

    for(int i = 0; i < n; i++){
        answer[i][i] = true;
    }

    
    int count = 0;
    for(int i = n - 2; i >= 0; i--){
        for(int j = i + 1; j < n; j++){
            // size 2
            if(s[i] == s[j] && j - i == 1){
                answer[i][j] = true;
                count++;
            }else if(answer[i + 1][j - 1] && s[i] == s[j]){ // greater than 2
                answer[i][j] = true;
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

    cout << count << endl;
    return 0;
}
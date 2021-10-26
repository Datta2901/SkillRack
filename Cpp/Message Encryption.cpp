#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin >> s >> n;
    int count = 0;
    bool rev = false;
    vector<vector<char> > answer(s.size() / n);
    // cout << s.size() << endl;
    for(int i = 0; i < s.size() / n; i++){
        for(int j = 0; j < n; j++){
            answer[i].push_back(s[count]);
            count++;
        }
    }

    for(int i = 0; i < answer.size(); i++){
        if(i % 2 == 1){
            reverse(answer[i].begin(),answer[i].end());
        }
    }
    string a = "";
    for(int i = 0; i < answer[0].size(); i++){
        for(int j = 0; j < answer.size(); j++){
            a += answer[j][i];
        }
    } 
    cout << a << endl;
    // for(auto row : answer){
    //     for(auto col : row){
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }
    
    return 0;
}
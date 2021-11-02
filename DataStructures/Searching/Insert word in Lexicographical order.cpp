#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    vector<string>answer;
    string a = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            answer.push_back(a);
            a = "";
        }else{
            a += s[i];
        }
    }
    if(a != ""){
    answer.push_back(a);
    }
    a = "";
    cin >> a;
    // cout << a << endl;
    answer.push_back(a);
    sort(answer.begin(),answer.end());

    for(int i = 0; i < answer.size() - 1; i++){
        cout << answer[i] << " ";
    }
    cout << answer[answer.size() - 1];
    return 0;
}
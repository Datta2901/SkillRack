#include<bits/stdc++.h>
using namespace std;

string GetString(stack<char>&answer){
    string a = "";
    while(!answer.empty()){
        a += answer.top();
        // cout << answer.top() << " ";
        answer.pop();
    }
    reverse(a.begin(),a.end());
    return a;
}

int main(){
    string s;
    getline(cin,s);
    stack<char>answer;
    // cout << s << endl;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '*'){
            if(!answer.empty()){
                answer.pop();
            }
        }else{
            // cout << s[i] << " ";
            answer.push(s[i]);
        }
    }
    cout << GetString(answer) << endl;
    return 0;
}
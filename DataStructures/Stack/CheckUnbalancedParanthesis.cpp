#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    stack<char>a;
    bool balance = true;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '{' || s[i] == '(' || s[i] == '['){
            a.push(s[i]);
        }else{
            if(!a.empty()){
                if(s[i] == '}' && a.top() == '{'){
                    a.pop();
                }else if(s[i] == ')' && a.top() == '('){
                    a.pop();
                }else if(s[i] == ']' && a.top() == '['){
                    a.pop();
                }else{
                    balance = false;
                    break;
                }
            }else{
                balance  = false;
                break;
            }
        }
    }
    if(!a.empty()){
        balance = false;
    }

    if(balance){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
    return 0;
}
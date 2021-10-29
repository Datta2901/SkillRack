#include<bits/stdc++.h>
using namespace std;


int main(){
    int t = 20;
    stack<string>answer;
    while(t != 0){
        cin >> t;
        if(t == 0){
            break;
        }
        if(t == 1){
            string s;
            getline(cin,s);
            answer.push(s);
        }else if(t == -1){
            if(!answer.empty()){
                answer.pop();
            }
        }else if(t == 2){
            if(!answer.empty()){
                cout << answer.top() << endl;
            }
        }
    }
    return 0;
}
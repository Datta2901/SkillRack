#include<bits/stdc++.h>
using namespace std;

bool isOperator(char i){
    if(i == '+' || i == '-' ||i == '/' ||i == '*'){
        return true;
    }
    return false;
}


void GetAnswer(stack<int>&store,char op){
    int sc = store.top();
    store.pop();
    int fst = store.top();
    store.pop();
    if(op == '+'){
        fst = fst + sc;
    }else if(op == '-'){
        fst = fst - sc;
    }else if(op == '*'){
        fst = fst * sc;
    }else if(op == '/'){
        fst = fst / sc;
    }
    store.push(fst);
}

int main(){
    string s;
    getline(cin,s);
    stack<int> store;
    int a = 0;
    char op = ' ';
    bool chr = false,digit = true;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ' && digit){
            store.push(a);
            a = 0;
        }else{
            if(!isOperator(s[i]) && s[i] != ' '){
                a = a * 10 + (s[i] - '0');
                digit  = true;
            }else{
                if(isOperator(s[i])){
                    op = s[i];
                    digit = false;
                    GetAnswer(store,op);
                }
            }
        }
    }
    if(!store.empty()){
        cout << store.top() << endl;
    }
    return 0;
}
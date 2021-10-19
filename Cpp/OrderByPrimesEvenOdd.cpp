
#include <bits/stdc++.h>
 
using namespace std;


bool prime(int a){
    for(int i = 2; i < a; i++){
        if( a % i == 0){
            return false;
        }
    }
    return true;
}


int main(int argc, char** argv){
    map<int,int> answer;
    string s;
    getline(cin,s);
    int a = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            if(a % 2 == 0 && a != 2){
                answer[a] = 4;
            }
            bool p = prime(a);
            
            if(p){
                answer[a] = 2;
            }else if(a % 2 == 1){
                answer[a] = 3;
            }
            a = 0;
        }else{
            a = a * 10 + (s[i] - '0');
        }
    }
    bool p = prime(a);
    if(p){
        answer[a] = 2;
    }else if(a % 2 == 0){
        answer[a] = 4;
    }else{
        answer[a] = 3;
    }
    vector<int>odd,even;
    for(auto it : answer){
        if(it.second ==  2){
            cout << it.first << " ";
        }else if(it.second == 3){
            odd.push_back(it.first);
        }else{
            even.push_back(it.first);
        }
    }

    for(int i = 0; i < odd.size(); i++){
        cout << odd[i] << " ";
    }

    for(int i = 0; i < even.size(); i++){
        cout << even[i] << " ";
    }
    return 0;
}
 
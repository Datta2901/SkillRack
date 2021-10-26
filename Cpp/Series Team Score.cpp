
#include <bits/stdc++.h>
 
using namespace std;

int getAnswer(int a,int b){
    if(a > b){
        return 3;
    }else if(a == b){
        return 1;
    }else{
        return 0;
    }
}

int getNumber(string s,int i){
    int a = 0;
    for(int j = i; j < s.length(); j++){
        if(s[j] == ' '){
            return a;
        }else{
            if(s[j] - '0' >= 0 && s[j] - '0' <= 9)
                a = a * 10 + (s[j] - '0');
        }
    }
    return a;
}

int main(int argc, char** argv)
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int a = 0,b = 0;
    vector<int>a1,a2;
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] != ' '){
            a = getNumber(s1,i);
            a1.push_back(a);
            if(log10(a) >= 1){
                i +=1;
            }
        }
    }
    
    for(auto it : a1){
        cout << it << " ";
    }
    for(int i = 0; i < s2.length(); i++){
        if(s2[i] != ' '){
            a = getNumber(s2,i);
            a2.push_back(a);
            if(log10(a) >= 1){
                i += 1;
            }
        }
    }
    cout << endl;
    for(auto i : a2){
        cout << i << " ";
    }
    a = 0,b = 0;
    for(int i = 0; i < min(a1.size(),a2.size()); i++){
        a += getAnswer(a1[i],a2[i]);
        b += getAnswer(a2[i],a1[i]);
    }
    cout << endl;
    cout << a << " " << b << endl;
}
 
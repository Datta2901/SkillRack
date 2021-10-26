#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    map<string,int> fre;
    string a = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '|| s[i] == ',' || s[i] == '.'){
            fre[a]++;
            a = "";
        }else{
            a += s[i];
        }
    }
    fre[a]++;
    cout << fre["a"] + fre["an"] + fre["the"] << endl;
    return 0;
}
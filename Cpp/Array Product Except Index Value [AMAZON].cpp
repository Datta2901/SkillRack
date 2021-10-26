#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int product = 1;
    int a = 0;
    vector<int>num;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            product *= a;
            num.push_back(a);
            a = 0;
        }else{
            a = a * 10 + (s[i] - '0');
        }
    }
    product *= a;
    num.push_back(a);

    // cout << s.size() << endl;
    for(int i = 0; i < num.size(); i++){
        cout << (product / num[i])  << " ";
    }
    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv){
    string s1,s2;
    cin >> s1 >> s2;
    string a = "";
    vector<int> fre1(26,0),fre2(26,0);
    for(int i = 0; i < s1.size(); i++){
        if(fre1[s1[i] - '0'] == 0){
            a += s1[i];
            fre1[s1[i]-'0']++;
        }
    }
    s1 = a;
    a = "";
    for(int i = 0; i < s2.size(); i++){
        if(fre2[s2[i] - '0'] == 0){
            a += s2[i];
            fre2[s2[i]-'0']++;
        }
    }
    s2 = a;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1 == s2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
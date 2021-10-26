#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    vector<string>str;
    string c = "";
    string a,b;
    cin >> a >> b; 
    map<string,int>fre;
    int mini = INT_MAX,count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            str.push_back(c);
            c = "";
            count++;
        }else{
            c += s[i];
        }
    }
    str.push_back(c);
    bool zero = false;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == b && (fre[a] > 0)){
            mini = min(mini,abs(i - fre[a]));
        }else if(str[i] == a && fre[b] > 0){
            mini = min(mini,abs(i - fre[b]));
        }
        fre[str[i]] = i;
    }
    cout << mini << endl;
    return 0;
}
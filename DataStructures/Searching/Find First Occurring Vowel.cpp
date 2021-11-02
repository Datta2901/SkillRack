#include<bits/stdc++.h>
using namespace std;

int main(){
    bool flag = true;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ||s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U'){
            cout << s[i] << endl;
            flag = false;
            break;
        }
    }
    if(flag){
        cout << -1 << endl;
    }
    
    return 0;
}
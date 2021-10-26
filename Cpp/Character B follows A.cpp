#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    char a,b;
    cin >> s >> a >> b;
    int count = 0;
    for(int i = 1; i < s.size(); i++){
        if(s[i - 1] == a && s[i] == b){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
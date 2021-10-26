#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++){
        int l = n - i - 1;
        for(int j = 0; j < n; j++){
            if(i == j){
                cout << s[j];
            }else if(j == l){
                cout << s[j];
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}


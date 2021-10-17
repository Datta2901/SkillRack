#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int x,y;
    getline(cin,s);
    cin >> x >> y;
    for(int i = 0; i < s.size(); i++){
        if(islower(s[i])){
            cout << char('a'+ int(s[i] + x - 'a') % 26);
        }else if(isdigit(s[i])){
            cout << (s[i] - '0' + y) ;
        }else{
            cout << s[i];
        }
    }
}
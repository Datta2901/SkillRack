#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int a,b;
    cin >> s >> a >> b;
    int n = s.size();
    int times = b / n;
    for(int i = 0; i < times; i++){
        s += s;
    }
    if(s[a - 1] == s[b - 1]){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    // cout << s;
    return 0;
}
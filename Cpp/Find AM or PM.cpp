#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    cin >> s;
    bool hours = true;
    int hr = 0,min = 0; 
    int total = 0;
    for(int i = 0; i < s.size(); i++){
        if(!hours){
            min = min * 10 + (s[i] - '0');
        }else if(s[i] == ':'){
            hours = false;
        }else{
            hr = hr * 10 + (s[i] - '0');
        }
    }

    total = hr * 60 + min;
    // cout << hr << endl;
    if(hr >= 24 || min > 60){
        cout << "INVALIDINPUT" << endl;
    }else if(total < 12 * 60){
        cout << "AM" << endl;;
    }else{
        cout << "PM" << endl;
    }
    return 0;
}
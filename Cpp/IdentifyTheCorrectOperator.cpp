#include <bits/stdc++.h>
 
using namespace std;


int getNumber(string s,int pos){
    int rev = 0;
    for(int i = pos; i < s.size(); i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '='){
            return rev;
        }else{
            rev = rev * 10 + s[i] -'0';
        }
    }
    return rev;
}

int main(int argc, char** argv){
    string s;
    getline(cin,s);
    // cout << s << endl;
    int a = 0,b = 0 ,c = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '+' || s[i] != '-' || s[i] != '*' || s[i] != '/' || s[i] == '='){
            cout << i << " ";
            if(a == 0){
                a = getNumber(s,i);
                i += log10(a) + 1;
            }else if(b == 0){
                b = getNumber(s,i);
                i += log10(b) + 1;
            }else if(c== 0){
                c = getNumber(s,i);
                i += log10(c) + 1;
            }  
            cout << i << endl; 
        }
    }
    cout << a  << " " << b << " " << c << endl; 
    if(a + b == c){
        cout << '+' << endl;
    }else if(a * b == c){
        cout << '*' << endl;
    }else if(a - b == c){
        cout << '-' << endl;
    }else if(a / b == c){
        cout << '/' << endl;
    }
}
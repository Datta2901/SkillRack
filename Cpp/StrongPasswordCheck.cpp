#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv){
    string s;
    getline(cin,s);
    int sp = 0,num = 0,up = 0,low = 0;
    if(s.length() < 8 || s.length() > 25){
        cout << "INVALID" << endl;
        return 0;
    }
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '@' || s[i] == '#' || s[i] == '!' || s[i] == '_'){
            sp++;
        }else if(isdigit(s[i])){
            num++;
        }else if(islower(s[i])){
            low++;
        }else if(isupper(s[i])){
            up++;
        }
    }

    if(sp >= 1 && low >= 1 && up >= 1 && num >= 2){
        cout << "VALID" << endl;
    }else{
        cout << "INVALID" << endl;
    }
}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv){   
    int count = 0;
    string s;
    cin >> s;
    // K --> T 
    // G --> D 
    // R --> L 
    // R --> F
    for(int i = 0; i < s.size(); i++){
        if(s[i] =='T' || s[i] == 'D' || s[i] == 'L' || s[i] == 'F'){
            count++;
        }
    }
    cout <<pow(2,count) << endl;
}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s;
    int d;
    string days[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    cin >> s >> d;
    cout << d <<endl;
    d = d % 7;
    int index = 0;
    for(int i = 0; i < 7; i++){
        if(days[i] == s){
            index = i;
        }
    }
    if((index + d) % 7 == 0){
        cout << days[6] << endl;
    }else{
        cout << days[(index + d) % 7 - 1] << endl;
    }
    
}
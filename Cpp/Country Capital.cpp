#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    map<string,string>country;
    string a,b;
    for(int i = 0; i < size; i++){
        cin >> a >> b;
        country[a] = b;
    }
    cin >> a;
    if(country[a] != ""){
        cout << country[a] << endl;
    }else{
        cout << "NONE" << endl;
    }
    return 0;
}
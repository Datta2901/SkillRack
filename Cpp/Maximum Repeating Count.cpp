#include<bits/stdc++.h>
using namespace std;

int main(){
    // int size;
    // cin >> size;
    string s;
    getline(cin,s);
    unordered_map<int,int> fre;
    int a = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            fre[a]++;
            // cout << a << " ";
            a = 0;
        }else{
            a = a * 10 + (s[i] - '0');
        }
    }
    fre[a]++;
    int maximum = INT_MIN,index = INT_MAX;
    for(auto it : fre){
        cout << it.first << " ";
        if(maximum <= it.second){
            maximum = it.second;
            index  = min(index,it.first);
        }
    }
    cout << index << endl;
    return 0;
}
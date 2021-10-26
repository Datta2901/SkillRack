#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    vector<int>index;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'||s[i] == 'u'){
            index.push_back(i);
        }
    }
    // cout << "indexes : " << endl;
    // for(auto it : index){
    //     cout << it << " ";
    // }
    // cout << endl;
    string a = "";
    reverse(s.begin(),s.end());
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(count < index.size() && i == index[count]){
            count++;
        }else{
            a += s[i];
        }
    }
    cout << a << endl;
}
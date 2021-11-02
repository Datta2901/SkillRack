#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    unordered_map<int,int> m;
    int last = 0;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        m[a]++;
        if(i == size -1){
            last = a;
        }
    }
    cout << m[last] << endl;
    return 0;
}
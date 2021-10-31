#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    queue<int>hostel;
    while(t--){
        int a;
        char s;
        cin >> a >> s;
        if(s == 'N'){
            hostel.push(a);
        }else{
            while(hostel.front() != a){
                int b = hostel.front();
                hostel.pop();
                hostel.push(b);
            }
            hostel.pop();
        }
    }
    if(hostel.empty()){
        cout << - 1 << endl;
    }else{
        while(hostel.size() != 1){
            hostel.pop();
        }
        cout << hostel.front() << endl;
    }
    return 0;
}
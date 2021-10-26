#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    string a = to_string(n);
    string b = a;
    reverse(b.begin(),b.end());
    if(b == a){
        return true;
    } 
    return false;
}
// Brute Force
int main(){
    int n;
    cin >> n;
    while(!isPalindrome(n)){
        n += 1;
    }
    cout << n << endl;
    return 0;
}
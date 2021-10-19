#include <bits/stdc++.h> 
using namespace std;

int main(int argc, char** argv){
    int n;
    cin >> n;
    long sum = 1;
    for(int i = 2; i < n / 2 + 1; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    cout << sum << endl;
}
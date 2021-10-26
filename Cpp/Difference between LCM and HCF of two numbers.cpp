#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    int g = __gcd(n1,n2);
    int l = (n1 * n2) / g;
    cout << l - g << endl;
    return 0;
}
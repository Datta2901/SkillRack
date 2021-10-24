#include<bits/stdc++.h>
using namespace std;


int getNumber(int base,int num){
    int ans = 0;
    int count = 0;
    while(num > 0){
        ans += (num % 10) * (pow(base,count));
        num /= 10;
        count++;
    }
    // cout << ans << " ";
    return ans;
}

int main(){
    int base,a,b;
    cin >> base >> a >> b;  
    long int  answer = getNumber(base,a) + getNumber(base,b);
    cout << answer << endl;
    return 0;
}
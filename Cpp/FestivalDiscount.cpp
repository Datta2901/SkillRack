#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int t;
    cin >> t;
    double sum = 0;
    while(t--){
        float a;
        int cost;
        cin >> cost;
        if(cost > 400 && cost <= 500){
            a =cost - float(cost) * 0.2;
        }else if(cost > 500 && cost <= 1000){
            a = cost - float(cost) * 0.25;
        }else if(cost >= 1000 ){
            a = cost - float(cost) * 0.5;
        }else{
            a = cost;
        }
        // cout << a << endl;
        sum += a;
    }
    if(sum > 2000){
        sum -= 100;
    }
    cout << setprecision(2) << fixed << sum << endl;

}
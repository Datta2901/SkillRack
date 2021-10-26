#include <bits/stdc++.h>
 
using namespace std;

int getSum(int num){
    int sum = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main(int argc, char** argv)
{
    int num;
    cin >> num;
    int sum = num;
    while(!(sum >= 0 && sum <= 9)){
        sum = getSum(sum);
    }
    cout << sum << endl;
    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;


int reverseDigits(int num){
    int rev = 0;
    while(num > 0){
        rev = rev * 10 + num % 10;
        num = num / 10; 
    }
    return rev;
}

int main(int argc, char** argv)
{
    int a,b;
    cin >> a >> b;
    a = reverseDigits(a);
    b = reverseDigits(b);
    a = reverseDigits(a + b);
    // a = reverseDigits(a);
    cout << a << endl;
}

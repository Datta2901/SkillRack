#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int sum1 = 0,sum2 = 0;
    float avg1,avg2;
    int n1 = 0,n2 = 0;
    int num = 0;
    for(int i = 0; i < s1.size() - 1; i++){
        if(s1[i] == ' '){
            sum1 += num;
            n1 += 1;
            num = 0;
        }else if(s1[i] == '-'){
            cout << "INVALIDINPUT" << endl;
            return 0; 
        }else{
            num  = num * 10 + (s1[i] - '0');
        }
    }
    sum1 += num;
    n1++;
    num = 0;
    for(int i = 0; i < s2.size(); i++){
        if(s2[i] == ' '){
            n2 += 1;
            sum2 += num;
            num = 0;
        }else if(s2[i] == '-'){
            cout << "INVALIDINPUT" << endl;
            return 0; 
        }else{
            num  = num * 10 + (s2[i] - '0');
        }
    }
    sum2 += num;
    n2++;
    // cout << sum1 << " " << sum2 << endl;
    avg1 = float(sum1)/n1;
    avg2 = float(sum2)/n2;
    if(avg1 == avg2){
        cout << max(sum1,sum2) << endl;
    }else if(avg1 > avg2){
        cout << sum1 << endl;
    }else{
        cout << sum2 << endl;
    }

    return 0;
}


 
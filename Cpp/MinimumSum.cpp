#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int size,k;
    cin >> size >> k;
    vector<int>answer;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        answer.push_back(a);
    }
    sort(answer.begin(),answer.end());
    int sum = 0;
    cout << accumulate(answer.begin(),answer.begin() + k,sum);
}
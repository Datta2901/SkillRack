#include<bits/stdc++.h>
using namespace std;


int main(){
    int size;
    cin >> size;
    vector<int>nums;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }
    stack<int>answer;
    answer.push(0);
    cout << 0 << " ";
    for(int i = 1; i < size; i++){
        while(!answer.empty() && nums[answer.top()] < nums[i]){
            answer.pop();
        }
        if(answer.empty()){
            cout << i  << " ";
        }else{
            cout << i - answer.top() - 1<< " ";
        }
        answer.push(i);
    }

    return 0;
}
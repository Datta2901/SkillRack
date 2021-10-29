#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    vector<int> nums;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }

    stack<int>answer;
    int mini = INT_MAX;
    for(int i = size - 1; i >= 0; i--){
        if(!answer.empty())
            mini = min(mini,answer.top());
        else{
            mini = nums[i];
        }
        answer.push(mini);
    }

    for(int i = 0; i < size; i++){
        if(answer.top() != nums[i]){
            cout << answer.top() << " ";
        }else if(answer.top() == nums[i]){
            if(!answer.empty()){
                cout << answer.top() << " ";
                answer.pop();
            }
        }
    }

    return 0;
}
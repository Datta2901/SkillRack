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
    for(int i = 0; i < size; i++){
        while(!answer.empty() && answer.top() >= nums[i]){
            answer.pop();
        }
        if(!answer.empty()){
            cout << answer.top() << " ";
        }
        answer.push(nums[i]);
    }
    cout << nums[size - 1] << endl;
    return 0;
}
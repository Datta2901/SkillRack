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
    stack<int>track;
    track.push(size - 1);
    int answer = INT_MIN;
    for(int i = size - 2; i >= 0 ; i--){
        while(!track.empty() && nums[track.top()] > nums[i]){
            track.pop();
        }
        if(!track.empty()){
            answer = max(answer,nums[i] * (i - (track.top()) - 1));
        }
        track.push(i);
    }
    cout << answer << endl;
    return 0;
}
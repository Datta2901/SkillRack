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
    bool flag = true;
    int target;
    cin >> target;
    for(int i = 0; i < size; i++){
        if(target == nums[i]){
            flag = false;
            cout << i + 1 << " ";
        }
    }
    if(flag){
        cout << -1 << endl;
    }
    // cout << endl;

    return 0;
}
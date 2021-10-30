#include<bits/stdc++.h>
using namespace std;
	
int main() {
	int size;
    cin >> size;
    vector<int>nums;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }
  	stack <int> s;
  	vector<int> ans;
  	for(int i = size-1; i >= 0; i--){
    	if(s.empty()){
          	s.push(nums[i]);
        	ans.push_back(nums[i]);
        }else if(s.top() < nums[i]){
            ans.push_back(s.top());
            s.push(nums[i]);
        }else{
        	while(!s.empty()){
            	if(s.top() < nums[i]){
                  	ans.push_back(s.top());
            		s.push(nums[i]);
                  	break;
                }
              	s.pop();
            }
          	if(s.empty()){
              	s.push(nums[i]);
            	ans.push_back(nums[i]);
            }
        }
    }
  	reverse(ans.begin(), ans.end());
  	nums = ans;
  	for(auto num:nums)
       cout<<num<<" ";
    return 0;
}


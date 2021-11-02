#include<bits/stdc++.h>
using namespace std;

void NextGreaterElement(vector<int> num){
	vector<int>answer;
	stack<int>s;
	for(int i = num.size()-1; i >= 0; i--){
		while(!s.empty() && s.top() < num[i]){
			s.pop();
		}
		if(!s.empty()){
			answer.push_back(s.top());
		}else{
			answer.push_back(-1);
		}
		s.push(num[i]);
	}
  	reverse(answer.begin(), answer.end());
	for(auto num : answer)
		cout << num << " ";
}

void NextSmallerElement(vector<int> num){
	vector<int>answer;
	stack<int>s;
	for(int i = num.size()-1; i >= 0; i--){
		while(!s.empty() && s.top() > num[i]){
			s.pop();
		}
		if(!s.empty()){
			answer.push_back(s.top());
		}else{
			answer.push_back(-1);
		}
		s.push(num[i]);
	}
  	reverse(answer.begin(), answer.end());
	for(auto num : answer)
		cout << num << " ";
}

// Stock span variation ->
void CountConsecutiveLesserNumbers(vector<int> num){
	stack<int>s;
	s.push(0);
	for(int i = 1; i < num.size(); i++){
		while(!s.empty() && num[s.top()] < num[i]){
			s.pop();
		}
		if(s.empty()){
			cout << i << " ";
		}else{
			cout << i - s.top() - 1 << " ";
		}
		s.push(i);
	}
}
	
int main() {
	int size;
    cin >> size;
    vector<int>nums;
    for(int i = 0; i < size; i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }
	NextGreaterElement(nums);
    cout << endl;
    NextSmallerElement(nums);
	cout << endl;
    CountConsecutiveLesserNumbers(nums);
    return 0;
}


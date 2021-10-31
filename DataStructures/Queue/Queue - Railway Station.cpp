#include<bits/stdc++.h>
using namespace std;


// 3 5
// 3 3 3
// 1-10 2-15 3-20
// 4-15 5-5 6-20
// 7-20 8-10 9-15

// 10 25 45
// 15 20 40
// 20 30 45

// 1 4 5 7 2

int main(){

    int n,k;
    cin >> n >> k;
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int>>> a;
    // TO implement priority queue with min priority
    // Syntax priority_queue<ds,vector<ds>,greater<ds> >
    // Ds - Required Data structure
    vector<int>sizes(n,0);
    for(int i = 0; i < n; i++){
        cin >> sizes[i];
    }

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < sizes[i]; j++){
            int id,time;
            cin >> id >> time;
            time = -time;
            sum += time;
            a.push({sum,id});
        }
    }
    int count = 0;
    int miniIndex = INT_MAX,MaxTime = INT_MIN;
    while(!a.empty()){
        count++;
        if(k == count){
            if(a.top().first == MaxTime){
               miniIndex = min(a.top().second,miniIndex);
                cout << miniIndex << endl;
            }else{
                cout << a.top().second << endl;
            }
        }        
        if(MaxTime < a.top().first){
            MaxTime = a.top().first;
            miniIndex = a.top().second;
        }else if(MaxTime == a.top().first){
            miniIndex = min(a.top().second,miniIndex);
        }
        // cout << a.top().first << " " << a.top().second << endl;
        a.pop();
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void dfs(set<int>adj[],int source,int n){
    vector<bool>visited(n + 1,false);
    visited[source] = true;
    stack<int>track;
    track.push(source);
    cout << source << " ";
    while(!track.empty()){
        int node = track.top();
        track.pop();
        for(auto it : adj[node]){
            if(!visited[it]){
                visited[it] = true;
                cout << it << " ";
                track.push(it);
            }
        }
    }
}

int main(){
    int n,sc;
    cin >> n >> sc;
    int mat[n + 1][n + 1];
    set<int>adj[n + 1];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 1){
                adj[i + 1].insert(j + 1);
                adj[j + 1].insert(i  + 1);
            }
        }
    }
    // for(auto i : adj){
    //     for(auto j : i){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    dfs(adj,sc,n);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;


pair<int,int> GetInput(){
    pair<int,int> a;
    cin >> a.first >> a.second;
    return a;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > mat(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int a;
            cin >> a;
            mat[i].push_back(a);
        }
    }

    pair<int,int>rabbit = GetInput();
    pair<int,int>carrot = GetInput();
    vector<vector<int> > distance(n,vector<int>(n,0));
    queue<pair<int,int> > track;
    distance[rabbit.first][rabbit.second] = 1;
    track.push(rabbit);

    int dx[4] = {0,0,1,-1};
    int dy[4] = {-1,1,0,0};

    while(!track.empty()){
        int x = track.front().first;
        int y = track.front().second;
        if(x == carrot.first && y == carrot.second){
            // cout << distance[x][y] << endl;
            break;
        }
        track.pop();
        for(int i = 0; i < 4; i++){
            int X = x + dx[i];
            int Y = y + dy[i];
            if(X < 0 || X >= n || Y < 0 || Y >= n || mat[X][Y] == 0 || mat[X][Y] == 2){
                continue;
            }
            mat[X][Y] = 2;
            distance[X][Y] = distance[x][y] + 1;
            cout << X << " " << Y << endl;
            track.push({X,Y});
        }
    }
    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int m,n;
    cin >> m >> n;
    map<int,int>fre;

    for(int i = 0; i < m; i++){
        int a;
        cin >> a;
        fre[a]++;
    }
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        fre[a]++;
    }
    int answer = 0;
    for(auto it : fre){
        if(it.second == 1){
            answer++;
        }
    }
    cout << answer << endl;
}
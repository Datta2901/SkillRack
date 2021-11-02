#include<bits/stdc++.h>
using namespace std;

void _print(vector<int>a){
    for(auto i : a){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    int size;
    cin >> size;
    vector<int>arr(size,0);
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j],arr[j + 1]);
            }
            _print(arr);
        }
    }
    return 0;
}
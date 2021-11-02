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
    int i, key, j;
    for (i = 0; i < size; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        _print(arr);
    }
    return 0;
}
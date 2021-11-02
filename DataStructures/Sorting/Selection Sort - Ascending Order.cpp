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
    
    int i, j, min_idx;
 
    for (i = 0; i < size -1; i++){
        min_idx = i;
        for (j = i + 1; j < size; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr[min_idx],arr[i]);
         _print(arr);
    }

    return 0;
}
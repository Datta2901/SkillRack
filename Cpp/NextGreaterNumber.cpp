#include<bits/stdc++.h>
using namespace std;

/*

Given input is 132

1 3 2

1 : 

  3   
    2           - Given array looks like this
1

0 here          - From backwards find the index which violates the increasing rule


2 here           - Now swap the index and the next greater element from the right side

    3 
        1       - After swapping 
2 

    1 
         3
2                
 
after reversing
    1,3            - Now reverse all the elements from the index we found to the end


SO final answer is 231

*/


int GetNumber(vector<int>digits){
    int num = 0;
    for(int i = digits.size() - 1,j = 0; i >= 0; i--,j++){
        num += (digits[i]) *  (pow(10,j));
    }
    return num;
}

int findNextGreaterNumber(vector<int>digits){
    // Finding index where the increasing order breaks
    int index = -1,NextGreater = 0;//
    for(int i = digits.size() - 2; i >= 0; i--){
        if(digits[i] < digits[i + 1]){
            index = i;
            break;
        }
    }

    if(index == -1){
        // There is no next greater element (sorted) so we return smallest number
        reverse(digits.begin(),digits.end());
        return GetNumber(digits);
    }
    for(int i = digits.size() - 1; i > index; i--){
        if(digits[i] > digits[index]){
            NextGreater = i;
            break;
        }
    }
    swap(digits[index],digits[NextGreater]);
    reverse(digits.begin() + index + 1,digits.end());
    return GetNumber(digits);
}


// 218765


//     8                      
//        7
//   1     6
// 2        5 

//     8
//        7
//   5     6
// 2         1

int main(){
    int n;
    cin >> n;
    vector<int> digits;
    while(n > 0){
        digits.insert(digits.begin(),n % 10);
        n /= 10;
    }
    // for(auto it : digits){
    //     cout << it << " ";
    // }

    cout << findNextGreaterNumber(digits) << endl;
    return 0;
}
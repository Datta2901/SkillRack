#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
        int index;
        int fuel;
        int distance;
        float mileage;
};


bool cmp(Car a,Car b){
    if(a.mileage > b.mileage){
        return true;
    }
    return false;
}

int main(){
    int size;
    cin >> size;
    vector<Car>details;
    Car dummy;
    for(int i = 0; i < size; i++){
        cin >> dummy.fuel >> dummy.distance;
        dummy.mileage = float(dummy.distance) / dummy.fuel;
        dummy.index = i;
        details.push_back(dummy);
    }  
    sort(details.begin(),details.end(),cmp);
    // for(auto it : details){
    //     cout << it.mileage << " ";
    // }
    cout << details[0].index + 1 << endl;
    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;



struct details{
    string name;
    int cost,discount;
    int rate;
};

bool cmp(const details a,const details b){
    if(a.rate < b.rate){
        return true;
    }
    return false;
}


int main(int argc, char** argv)
{
    int size;
    cin >> size;
    details a;
    vector<details> answer(size,a);
    for(int i = 0; i < size; i++){
        cin >> a.name >> a.cost >> a.discount;
        a.rate = a.cost - (a.cost * a.discount/100);
        answer[i] = a;
    }
    sort(answer.begin(),answer.end(),cmp);
    cout << answer[0].name << endl;
}
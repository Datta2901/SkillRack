#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv){
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double dis=sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
    cout << setprecision(2) << fixed << dis << endl;
}
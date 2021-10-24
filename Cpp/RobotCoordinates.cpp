
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    int finalx = 0, finaly = 0;
    int num;
    char ch, ch1;
    while(scanf("%c%d", &ch, &num) > 0){
        if (ch == 'x' || ch == 'E'){
            finalx = finalx + num;
        }
        else if (ch == 'W'){
            finalx = finalx - num;
        }
        else if (ch == 'N' || ch == 'y'){
            finaly = finaly + num;
        }
        else if (ch == 'S'){
            finaly = finaly - num;
        }
    }
    cout << "x" << finalx << " " << "y" << finaly;
    return 0;
}
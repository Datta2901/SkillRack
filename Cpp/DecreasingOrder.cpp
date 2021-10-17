#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
  string s,a;
  cin >> s;
  map<char,int> answer;
  for(int i = 0; i < s.size(); i++){
      answer[s[i]]++;
      if(answer[s[i]] == 1){
          a += s[i];
      }
  }
  s = a;
  sort(s.begin(),s.end(),greater<char>());
  cout << s << endl;
}
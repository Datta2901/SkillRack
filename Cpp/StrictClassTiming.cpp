#include <bits/stdc++.h>
 
using namespace std;

int GetMin(string s){
    bool min = false;
    int h = 0,m = 0;
    for(int i  = 0; i < s.size(); i++){
        if(s[i] == ':'&& !min){
            h = h * 10 + (s[i] - '0');
            min = true;
        }else{
            m = m * 10 + (s[i] - '0');
        }
    }
    return h * 60 + m;
}

int main(int argc, char** argv)
{   
    int n,m;
    cin >> n >> m;
    string time;
    cin >> time;
    int required = GetMin(time);
    int count = 0;
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        if(required >= GetMin(a)){
            count++;
        }
    }
    if(count >= m){
        cout << "No" << endl; 
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}


// #include <bits/stdc++.h>
 
// using namespace std;

// int main(int argc, char** argv)
// {
//     int n,m;
//     cin>>n>>m;
//     string x;
//     cin>>x;
//     vector<string>v;
//     int hr=0;
//     int i;
//     for( i=0;i<x.length();i++)
//     {
//         if(x[i]!=':')
//         {
//             hr=hr*10+x[i]-'0';
//         }
//         else
//         {
//             break;
//         }
//     }
//     i++;

//     int min=0;
//     for(;i<x.length();i++)
//     {
//         min=min*10+x[i]-'0';
//     } 
//     cout << "hr " << hr <<  " min "  << min<< endl;
//     for(int i=0;i<n;i++)
//       {
//          string in;
//          cin>>in;
//          v.push_back(in);
//       }
//       int c=0;
//       for(auto i: v)
//       {
//           int h1=0,min1=0;
//           int j=0;
//           string y=i;
//           if(y==x)
//           {
//           c++;
//           continue;
//           }
//         for( j=0;j<y.length();j++)
//         {
//             if(y[j]!=':')
//             {
//                 h1=h1*10+y[j]-'0';
//             }
//             else
//             {
//                 break;
//             }}
//             j++;
//         for( ;j<i.length();j++)
//         {
//             min1=min1*10+ (i[j]-'0');
//         }
//         // cout << " h1 "<< h1  << " min1 " << min1 << endl;
//         if(h1<hr || ((h1==hr)&& min>=min1))
//         {
//             c++;
//         }     
//       }
     
//       if(c<m)
//       cout<<"Yes";
//       else
//       cout<<"No"; 
//       return 0; 
      
// }
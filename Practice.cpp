
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> v;
    int c = 0;
    sort(s.begin(), s.end());
    for(int i=0; i<s.size(); i++){
        // for(int j=0; j<s.size(); j++){
        //     if(s[i] == s[j]){
        //         c++;
        //     }
        // }
        // if(c==1)    v.push_back(c);
        // else if(c>1){
        //     int x = 1;
        //     v.push_back(x);
        // }
        if(s[i] == s[i+1])  c++;
    }
    int sum = s.size() - c;
    // for(int i=0; i<v.size(); i++){
    //     sum = sum + v[i];
    // }
    if(sum%2==0)    cout << "CHAT WITH HER!";
    else    cout << "IGNORE HIM!";

}

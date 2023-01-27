
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
        if(s[i] == s[i+1])  c++;
    }
    int sum = s.size() - c;
    
    if(sum%2==0)    cout << "CHAT WITH HER!";
    else    cout << "IGNORE HIM!";

}

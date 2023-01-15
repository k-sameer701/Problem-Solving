/*

13. Roman to Integer
https://leetcode.com/problems/roman-to-integer/

*/
#include <bits/stdc++.h>
using namespace std;

int check(char ch){
    // if(ch == 'I')
    //     return 1;
    // if(ch == 'V')
    //     return 5;
    // if(ch == 'X')
    //     return 10;
    // if(ch == 'D')
    //     return 500;
    // if(ch == 'L')
    //     return 50;
    // if(ch == 'C')
    //     return 100;
    // if(ch == 'M')
    //     return 1000;
    int a;
    switch(ch){
        case 'I': a=1; break;
        case 'V': a=5; break;
        case 'X': a=10; break;
        case 'D': a=500; break;
        case 'C': a=100; break;
        case 'M': a=1000; break;
        case 'L': a=50; break;
    }
    return a;
    
}
int romanToInt(string s)
{
    int ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
        cout << check(s[i])*check(s[i+1]) << endl;
        ans = ans + check(s[i]);
    }
    return ans;
}

int main(){
    string s;
    cin >> s;
    cout << romanToInt(s) << endl;
}
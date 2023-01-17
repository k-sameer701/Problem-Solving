/*

242. Valid Anagram
https://leetcode.com/problems/valid-anagram/description/

Status - Submitted

*/

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if (s == t)
        return true;

    return false;
}

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    cout << isAnagram(s1, s2) << endl;
}
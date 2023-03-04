/*

387. First Unique Character in a String
https://leetcode.com/problems/first-unique-character-in-a-string/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s)
{
    unordered_map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }

    char ch;
    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        if (it->second == 1)
            ch = it->first;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (ch == s[i])
            return i;
    }

    return -1;
}

int main()
{

    return 0;
}